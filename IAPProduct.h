#import <Foundation/Foundation.h>

@class SKProduct;
@class SKPaymentTransaction;
@class SKPayment;

extern const NSString* kStateLoading;
extern const NSString* kStateReadyForSale;
extern const NSString* kStatePurchased;
extern const NSString* kStatePurchasing;
extern const NSString* kStateError;
extern const NSString* kStateRestored;

@interface IAPProduct : NSObject
@property (nonatomic, readonly, strong) NSString* identifier;
@property (nonatomic, readonly, strong) NSDecimalNumber* price;
@property (nonatomic, readonly, assign) BOOL isLoading;
@property (nonatomic, readonly, assign) BOOL isReadyForSale;
@property (nonatomic, readonly, assign) BOOL isPurchased;
@property (nonatomic, readonly, strong) const NSString* state;

- (id)initWithIdentifier:(NSString*)identifier;
- (BOOL)identifierEquals:(NSString*)identifier;

- (void)updateWithSKProduct:(SKProduct*)skProduct;
- (void)updateWithSKPaymentTransaction:(SKPaymentTransaction*)skTransaction;
- (void)updateWithSKPayment:(SKPayment*)skPayment;
@end
