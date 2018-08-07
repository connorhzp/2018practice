 ///
 /// @file    TestRss.cc
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2018-03-05 11:15:37
 ///
 
#include "tinyxml2.h"

#include <boost/regex.hpp>

#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;

using namespace tinyxml2;


void test(void)
{
	XMLDocument doc;
	doc.LoadFile("coolshell.xml");

	int ret = doc.ErrorID();
	cout << "ret = " << ret << endl;
	
	XMLElement * proot = doc.FirstChildElement("rss");

	XMLElement * pitem = proot->FirstChildElement("channel")->FirstChildElement("item");

	do
	{

	XMLElement * ptitle = pitem->FirstChildElement("title");
	XMLElement * plink = pitem->FirstChildElement("link");
	XMLElement * pcontent = pitem->FirstChildElement("content:encoded");

	string title(ptitle->GetText());
	string link(plink->GetText());
	string content(pcontent->GetText());

	cout << "title:" << title << endl;
	cout << "link: " << link << endl;
	//cout << "content:" << content << endl;


	boost::regex expr("<.+?>");
	
	cout << boost::regex_replace(content, expr, string("")) << endl;

	}while((pitem = pitem->NextSiblingElement("item")) != NULL);

}


int main(void)
{
	test();

	return 0;
}
