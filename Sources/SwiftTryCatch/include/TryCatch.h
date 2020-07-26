#import <Foundation/Foundation.h>

/**
 Try-Catch-Finally for Swift.
 - Migrator: ISHIKAWA Koutarou
 - Migrated to SwiftPackageManager 5.2: 2020/07/26
 - Migrate Copyright: © 2020 ISHIKAWA Koutarou. All rights reserved.
 - Original Created: 2014/10/10, William Falcon
 - Original Copyright: © 2014 William Falcon All rights reserved. This software is licensed under the MIT License. Full details can be found in the README.
 */
@interface SwiftTryCatch : NSObject

	/// Provides try catch functionality for swift by wrapping around Objective-C
	/// @param tryBlock throwable block
	/// @param catchBlock <#catchBlock description#>
	/// @param finallyBlock defering block
	+ (void)tryBlock:(void(^)(void))tryBlock catchBlock:(void(^)(NSException*exception))catchBlock finallyBlock:(void(^)(void))finallyBlock;

	/// <#Description#>
	/// @param s A human-readable message string summarizing the reason for the exception.
	/// @throws <#description#>
	+ (void)throwString:(NSString*)s;

	/// <#Description#>
	/// @param e <#e description#>
	/// @throws <#description#>
	+ (void)throwException:(NSException*)e;

@end
