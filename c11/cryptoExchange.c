#include <errno.h>
#include <stdio.h>
//#include <curl/curl.h>
// Going to sleep, just a progress update
// Finished messing around with running local aquinas server

char selectCurrency()
{
	// Resolve from casting currency on NULL comparison
	int currency;
	char c;
	while(1==1)
	{
		printf("\n\tSelect Current cryptocurrency\n\n1) Monero\n2) Bitcoin\n3) Ethereum\n\n> ");
		scanf(" %s", &c);
		getchar();
		switch(c)
		{
			case '1':
				currency = 1;
				break;
			case '2':
				currency = 2;
				break;
			case '3':
				currency = 3;
				break;
			default:
				printf("Not a valid input!\n");
		}
		if (( currency != NULL ))
		{
			printf("Currency: %d\n", currency);
			return currency;
			break;
		}
		printf("Choice not a valid choice..\n");
	}
}
int main(){
	char c;
	int currency, fromcurrency, tocurrency;
	fromcurrency = selectCurrency();
	printf("\n\n\tNow select the currency to convert to.. \n");
	tocurrency = selectCurrency();
	/*
	while(1==1)
	{
	printf("\n\tSelect Current cryptocurrency\n\n1) Monero\n2) Bitcoin\n3) Ethereum\n\n> ");
	scanf(" %s", &c);
	getchar();
	switch(c)
	{
		case '1':
			currency = "monero";
			break;
		case '2':
			currency = "bitcoin";
			break;
		case '3':
			currency = "ethereum";
			break;
		default:
			printf("Not a valid input!\n");
	}
	if (( currency != NULL ))
	{
		printf("Currency: %s\n", currency);
		return currency;
		break;
	}
	printf("Choice not a valid choice..\n");
	}
	*/
	printf("Convert\nFrom: %d\n", fromcurrency);
	printf("To: %d\n", tocurrency);
	printf("Choice %d selected\n", c);
	return 0;
	/*
	curl_handle = curl_easy_init();
	curl_easy_setopt(curl_handle, CURLOPT_URL, exchangeUrl);
	curl_easy_setopt(curl_handle, CURLOPT_NOPROGRESS, 1L);
	*/
	/*Get updated values from server*/

}
