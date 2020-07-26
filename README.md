# 0. Overview
Simple wrapper built around Objective-C `@try`/`@catch`/`@finally`.
_Forked from [https://github.com/ypopovych/SwiftTryCatch](https://github.com/ypopovych/SwiftTryCatch) and modified for SwiftPackageManager 5.2 support. Initial version is [https://github.com/williamFalcon/SwiftTryCatch](https://github.com/williamFalcon/SwiftTryCatch)._

# 1. Setup
## 1.1. via [Swift Package Manager](https://swift.org/package-manager/)
The Swift Package Manager is a tool for automating the distribution of Swift libraries/frameworks and is integrated into the swift compiler. Once your Swift package is set up, you can add SwiftTryCatch as a `dependency` as easy as adding it to the ‘dependencies' value in `Package.swift`.

# 1.2. Usage
```swift
SwiftTryCatch.try({
	// try something

}, catch: { (error) in
	println("\(error.description)")

}, finallyBlock: {
	// close resources
})
``
