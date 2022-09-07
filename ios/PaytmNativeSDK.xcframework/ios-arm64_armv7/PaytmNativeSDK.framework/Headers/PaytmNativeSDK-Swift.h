#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef PAYTMNATIVESDK_SWIFT_H
#define PAYTMNATIVESDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PaytmNativeSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;
@class UIViewController;

SWIFT_PROTOCOL_NAMED("AIDelegate")
@protocol AIDelegate
- (void)didFinishWith:(BOOL)success response:(NSDictionary<NSString *, id> * _Nonnull)response error:(NSString * _Nullable)error withUserCancellation:(BOOL)hasUserCancelledTransaction;
- (void)openPaymentController:(UIViewController * _Nonnull)controller;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, AIEnvironment, "AIEnvironment", open) {
  AIEnvironmentProduction = 0,
  AIEnvironmentStaging = 1,
};


SWIFT_CLASS("_TtC14PaytmNativeSDK9AIHandler")
@interface AIHandler : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface AIHandler (SWIFT_EXTENSION(PaytmNativeSDK)) <AIDelegate>
- (void)didFinishWith:(BOOL)success response:(NSDictionary<NSString *, id> * _Nonnull)response error:(NSString * _Nullable)error withUserCancellation:(BOOL)hasUserCancelledTransaction;
- (void)openPaymentController:(UIViewController * _Nonnull)controller;
@end

@class NSNotification;

@interface AIHandler (SWIFT_EXTENSION(PaytmNativeSDK))
- (void)recieveNotificationForUPIWithNotification:(NSNotification * _Nonnull)notification;
@end




@class NSCoder;

SWIFT_CLASS("_TtC14PaytmNativeSDK19AINativeConsentView")
@interface AINativeConsentView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



typedef SWIFT_ENUM(NSInteger, AINativePaymentModes, open) {
  AINativePaymentModesWallet = 0,
  AINativePaymentModesPaymentBank = 1,
  AINativePaymentModesPostPaid = 2,
  AINativePaymentModesUpi = 3,
  AINativePaymentModesCreditCard = 4,
  AINativePaymentModesDebitCard = 5,
  AINativePaymentModesNetBanking = 6,
};

typedef SWIFT_ENUM(NSInteger, AlertViewType, open) {
  AlertViewTypeNone = 0,
  AlertViewTypeLocal = 1,
  AlertViewTypeService = 2,
};

typedef SWIFT_ENUM(NSInteger, AuthMode, open) {
  AuthModeOtp = 0,
  AuthModeAtm = 1,
  AuthModeNone = 2,
};

@class NSError;
@class NSBundle;

SWIFT_CLASS("_TtC14PaytmNativeSDK20JRAlertViewWithBlock")
@interface JRAlertViewWithBlock : UIAlertController
@property (nonatomic, strong) UIViewController * _Nullable topViewcontroller;
/// <ul>
///   <li>
///     Use this method to show alert with two button, where button names should be provided by user as params
///   </li>
/// </ul>
/// <ul>
///   <li>
///   </li>
/// </ul>
- (void)show:(NSString * _Nullable)cancelButtonTitle handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler otherButtonTitles:(NSString * _Nullable)otherButtonTitles otherButtonhandler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))otherButtonhandler;
/// <ul>
///   <li>
///     Use this method to show alert with two button, where button names should be provided by user as params
///   </li>
/// </ul>
/// <ul>
///   <li>
///   </li>
/// </ul>
- (void)show:(NSString * _Nullable)cancelButtonTitle handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler otherButtonTitleList:(NSArray<NSString *> * _Nullable)otherButtonTitleList otherButtonhandler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))otherButtonhandler;
/// Class method to show an message with Default “OK” button
/// *
+ (void)showAlertView:(NSString * _Nullable)message;
/// Class method to show “Message” and OK button
/// An handler will be provided to listen OK button click (buttonIndex is 0)
/// *
+ (void)showAlertViewWithMessage:(NSString * _Nullable)message handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an alert with “title”, “message” and “OK” button
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message;
/// Class method to show an alert with “title”, “message” and “OK” button
/// Same as above method
/// *
+ (void)showAlertViewWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message;
/// Class method to show an alert with “title”, “message” and “OK” button
/// An handler will be provided to listen OK button click (buttonIndex is 0)
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an alert with “title”, “message” and (“cancelButtonTitle”, “otherButtonTitles”) buttons
/// An handler will be provided to listen for button click (cancelbuttonindex is 0)
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message cancelButtonTitle:(NSString * _Nullable)cancelButtonTitle otherButtonTitles:(NSString * _Nullable)otherButtonTitles handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an error
/// error?.domain -> will be used as title
/// error?.localizedDescription -> will be used as message
/// “OK” button will be shown
/// *
+ (void)showError:(NSError * _Nullable)error;
/// Class method to show an error
/// error?.domain -> will be used as title
/// error?.localizedDescription -> will be used as message
/// “OK” button will be shown
/// An hanlder is provided to listen button click
/// *
+ (void)showError:(NSError * _Nullable)error handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@interface JRAlertViewWithBlock (SWIFT_EXTENSION(PaytmNativeSDK))
/// Class method to show an error
/// error?.domain -> will be used as title
/// error?.localizedDescription -> will be used as message
/// “OK” button will be shown
/// *
+ (void)showError:(NSError * _Nullable)error withErrorType:(enum AlertViewType)errorType;
/// Class method to show an error
/// error?.domain -> will be used as title
/// error?.localizedDescription -> will be used as message
/// “OK” button will be shown
/// An hanlder is provided to listen button click
/// *
+ (void)showError:(NSError * _Nullable)error withErrorType:(enum AlertViewType)errorType handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an message with Default “OK” button
/// *
+ (void)showAlertView:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType;
/// Class method to show “Message” and OK button
/// An handler will be provided to listen OK button click (buttonIndex is 0)
/// *
+ (void)showAlertViewWithMessage:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an alert with “title”, “message” and “OK” button
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType;
/// Class method to show an alert with “title”, “message” and “OK” button
/// Same as above method
/// *
+ (void)showAlertViewWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType;
/// Class method to show an alert with “title”, “message” and “OK” button
/// An handler will be provided to listen OK button click (buttonIndex is 0)
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an alert with “title”, “message” and (“cancelButtonTitle”, “otherButtonTitles”) buttons
/// An handler will be provided to listen for button click (cancelbuttonindex is 0)
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType cancelButtonTitle:(NSString * _Nullable)cancelButtonTitle otherButtonTitles:(NSString * _Nullable)otherButtonTitles handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
@end


SWIFT_CLASS("_TtC14PaytmNativeSDK19JRPasscodeTextField")
@interface JRPasscodeTextField : UITextField
- (void)deleteBackward;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end






#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#elif defined(__ARM_ARCH_7A__) && __ARM_ARCH_7A__
// Generated by Apple Swift version 5.6.1 (swiftlang-5.6.0.323.66 clang-1316.0.20.12)
#ifndef PAYTMNATIVESDK_SWIFT_H
#define PAYTMNATIVESDK_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="PaytmNativeSDK",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSString;
@class UIViewController;

SWIFT_PROTOCOL_NAMED("AIDelegate")
@protocol AIDelegate
- (void)didFinishWith:(BOOL)success response:(NSDictionary<NSString *, id> * _Nonnull)response error:(NSString * _Nullable)error withUserCancellation:(BOOL)hasUserCancelledTransaction;
- (void)openPaymentController:(UIViewController * _Nonnull)controller;
@end

typedef SWIFT_ENUM_NAMED(NSInteger, AIEnvironment, "AIEnvironment", open) {
  AIEnvironmentProduction = 0,
  AIEnvironmentStaging = 1,
};


SWIFT_CLASS("_TtC14PaytmNativeSDK9AIHandler")
@interface AIHandler : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@interface AIHandler (SWIFT_EXTENSION(PaytmNativeSDK)) <AIDelegate>
- (void)didFinishWith:(BOOL)success response:(NSDictionary<NSString *, id> * _Nonnull)response error:(NSString * _Nullable)error withUserCancellation:(BOOL)hasUserCancelledTransaction;
- (void)openPaymentController:(UIViewController * _Nonnull)controller;
@end

@class NSNotification;

@interface AIHandler (SWIFT_EXTENSION(PaytmNativeSDK))
- (void)recieveNotificationForUPIWithNotification:(NSNotification * _Nonnull)notification;
@end




@class NSCoder;

SWIFT_CLASS("_TtC14PaytmNativeSDK19AINativeConsentView")
@interface AINativeConsentView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end



typedef SWIFT_ENUM(NSInteger, AINativePaymentModes, open) {
  AINativePaymentModesWallet = 0,
  AINativePaymentModesPaymentBank = 1,
  AINativePaymentModesPostPaid = 2,
  AINativePaymentModesUpi = 3,
  AINativePaymentModesCreditCard = 4,
  AINativePaymentModesDebitCard = 5,
  AINativePaymentModesNetBanking = 6,
};

typedef SWIFT_ENUM(NSInteger, AlertViewType, open) {
  AlertViewTypeNone = 0,
  AlertViewTypeLocal = 1,
  AlertViewTypeService = 2,
};

typedef SWIFT_ENUM(NSInteger, AuthMode, open) {
  AuthModeOtp = 0,
  AuthModeAtm = 1,
  AuthModeNone = 2,
};

@class NSError;
@class NSBundle;

SWIFT_CLASS("_TtC14PaytmNativeSDK20JRAlertViewWithBlock")
@interface JRAlertViewWithBlock : UIAlertController
@property (nonatomic, strong) UIViewController * _Nullable topViewcontroller;
/// <ul>
///   <li>
///     Use this method to show alert with two button, where button names should be provided by user as params
///   </li>
/// </ul>
/// <ul>
///   <li>
///   </li>
/// </ul>
- (void)show:(NSString * _Nullable)cancelButtonTitle handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler otherButtonTitles:(NSString * _Nullable)otherButtonTitles otherButtonhandler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))otherButtonhandler;
/// <ul>
///   <li>
///     Use this method to show alert with two button, where button names should be provided by user as params
///   </li>
/// </ul>
/// <ul>
///   <li>
///   </li>
/// </ul>
- (void)show:(NSString * _Nullable)cancelButtonTitle handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler otherButtonTitleList:(NSArray<NSString *> * _Nullable)otherButtonTitleList otherButtonhandler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))otherButtonhandler;
/// Class method to show an message with Default “OK” button
/// *
+ (void)showAlertView:(NSString * _Nullable)message;
/// Class method to show “Message” and OK button
/// An handler will be provided to listen OK button click (buttonIndex is 0)
/// *
+ (void)showAlertViewWithMessage:(NSString * _Nullable)message handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an alert with “title”, “message” and “OK” button
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message;
/// Class method to show an alert with “title”, “message” and “OK” button
/// Same as above method
/// *
+ (void)showAlertViewWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message;
/// Class method to show an alert with “title”, “message” and “OK” button
/// An handler will be provided to listen OK button click (buttonIndex is 0)
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an alert with “title”, “message” and (“cancelButtonTitle”, “otherButtonTitles”) buttons
/// An handler will be provided to listen for button click (cancelbuttonindex is 0)
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message cancelButtonTitle:(NSString * _Nullable)cancelButtonTitle otherButtonTitles:(NSString * _Nullable)otherButtonTitles handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an error
/// error?.domain -> will be used as title
/// error?.localizedDescription -> will be used as message
/// “OK” button will be shown
/// *
+ (void)showError:(NSError * _Nullable)error;
/// Class method to show an error
/// error?.domain -> will be used as title
/// error?.localizedDescription -> will be used as message
/// “OK” button will be shown
/// An hanlder is provided to listen button click
/// *
+ (void)showError:(NSError * _Nullable)error handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



@interface JRAlertViewWithBlock (SWIFT_EXTENSION(PaytmNativeSDK))
/// Class method to show an error
/// error?.domain -> will be used as title
/// error?.localizedDescription -> will be used as message
/// “OK” button will be shown
/// *
+ (void)showError:(NSError * _Nullable)error withErrorType:(enum AlertViewType)errorType;
/// Class method to show an error
/// error?.domain -> will be used as title
/// error?.localizedDescription -> will be used as message
/// “OK” button will be shown
/// An hanlder is provided to listen button click
/// *
+ (void)showError:(NSError * _Nullable)error withErrorType:(enum AlertViewType)errorType handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an message with Default “OK” button
/// *
+ (void)showAlertView:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType;
/// Class method to show “Message” and OK button
/// An handler will be provided to listen OK button click (buttonIndex is 0)
/// *
+ (void)showAlertViewWithMessage:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an alert with “title”, “message” and “OK” button
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType;
/// Class method to show an alert with “title”, “message” and “OK” button
/// Same as above method
/// *
+ (void)showAlertViewWithTitle:(NSString * _Nullable)title message:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType;
/// Class method to show an alert with “title”, “message” and “OK” button
/// An handler will be provided to listen OK button click (buttonIndex is 0)
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
/// Class method to show an alert with “title”, “message” and (“cancelButtonTitle”, “otherButtonTitles”) buttons
/// An handler will be provided to listen for button click (cancelbuttonindex is 0)
/// *
+ (void)showAlertView:(NSString * _Nullable)title message:(NSString * _Nullable)message withErrorType:(enum AlertViewType)errorType cancelButtonTitle:(NSString * _Nullable)cancelButtonTitle otherButtonTitles:(NSString * _Nullable)otherButtonTitles handler:(void (^ _Nullable)(JRAlertViewWithBlock * _Nullable, NSInteger))handler;
@end


SWIFT_CLASS("_TtC14PaytmNativeSDK19JRPasscodeTextField")
@interface JRPasscodeTextField : UITextField
- (void)deleteBackward;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end






#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif

#endif
