// win_html_parser_aasharib.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "myhtml/myhtml.h"

int main()
{

	// sample code
	char html[] = "<div><span>HTML</span></div>";

	// basic init
	myhtml_t* myhtml = myhtml_create();
	myhtml_init(myhtml, MyHTML_OPTIONS_DEFAULT, 1, 0);

	// first tree init 
	myhtml_tree_t* tree = myhtml_tree_create();
	myhtml_tree_init(tree, myhtml);

	// parse html
	myhtml_parse(tree, MyHTML_ENCODING_UTF_8, html, strlen(html));

	// release resources
	myhtml_tree_destroy(tree);
	myhtml_destroy(myhtml);
	return 0;
}
