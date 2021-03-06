/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */



@interface AuthScheme : NSObject 
{
}

+ (void)initialize;
+ (id)knownSchemes;
+ (void)registerSchemeClass:(Class)arg1;
+ (id)schemeWithName:(id)arg1;
+ (id)authSchemesForAccount:(id)arg1 connection:(id)arg2;

- (id)retain;
- (NSUInteger)retainCount;
- (void)release;
- (Class)connectionClassForAccountClass:(Class)arg1;
- (Class)authenticatorClassForAccountClass:(Class)arg1;
- (NSUInteger)defaultPortForAccount:(id)arg1;
- (BOOL)hasEncryption;
- (BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2;
- (id)authenticatorForAccount:(id)arg1 connection:(id)arg2;
- (BOOL)requiresPassword;
- (BOOL)requiresDomain;
- (id)name;
- (id)humanReadableName;

@end
