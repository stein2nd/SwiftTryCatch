# SwiftTryCatch
Simple wrapper built around Objective-C `@try`/`@catch`/`@finally`.
_Forked from [https://github.com/ypopovych/SwiftTryCatch](https://github.com/ypopovych/SwiftTryCatch) and modified for SwiftPackageManager 5.2 support. Initial version is [https://github.com/williamFalcon/SwiftTryCatch](https://github.com/williamFalcon/SwiftTryCatch)._

## Usage

### Install via Carthage
Add this repro to your Cartfile per usual and `carthage update` drag to include, etc. (see [https://github.com/Carthage/Carthage](https://github.com/Carthage/Carthage)).

### Use
```swift
SwiftTryCatch.try({
	// try something

}, catch: { (error) in
	println("\(error.description)")

}, finallyBlock: {
	// close resources
})
```
