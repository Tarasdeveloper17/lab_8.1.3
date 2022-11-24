#include "header.h"
#import <XCTest/XCTest.h>

@interface test : XCTestCase

@end

@implementation test

- (void)test_lab {
    char s[10];
    cout << "Enter string:" << endl;
    cin.getline(s, 10);
    char c = 'n';
    char c1 = 'o';
    Change(s, c, c1);
    cout<<"After: "<<s<<endl;
    char* result = Change(s, c, c1);
    
    XCTAssertNotEqual(*result, '\0');
    
}

@end
