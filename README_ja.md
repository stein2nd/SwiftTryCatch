# SwiftTryCatch
Objective-Cの`@try`/`@catch`/`@finally`を中心に構築された、シンプルなラッパーです。
_[https://github.com/ypopovych/SwiftTryCatch](https://github.com/ypopovych/SwiftTryCatch)からフォークし、SwiftPackageManager 5.2対応を行ないました。初期バージョンは[https://github.com/williamFalcon/SwiftTryCatch](https://github.com/williamFalcon/SwiftTryCatch)です。_

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

