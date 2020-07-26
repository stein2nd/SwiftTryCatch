# 0. 概要
Objective-Cの`@try`/`@catch`/`@finally`を中心に構築された、シンプルなラッパーです。
_[https://github.com/ypopovych/SwiftTryCatch](https://github.com/ypopovych/SwiftTryCatch)からフォークし、SwiftPackageManager 5.2対応を行ないました。初期バージョンは[https://github.com/williamFalcon/SwiftTryCatch](https://github.com/williamFalcon/SwiftTryCatch)です。_

# 1. セットアップ
## 1.1. [Swift Package Manager](https://swift.org/package-manager/)経由
Swift Package Managerは、Swiftライブラリ/フレームワークの配布を自動化する為のツールで、Swiftコンパイラーに統合されています。Swiftパッケージを設定したら、`Package.swift`の「dependencies」値に追加するだけで簡単にSwiftTryCatchを`dependency`として追加できます。

# 1.2. 使用法
```swift
SwiftTryCatch.try({
	// try something

}, catch: { (error) in
	println("\(error.description)")

}, finallyBlock: {
	// close resources
})
```
