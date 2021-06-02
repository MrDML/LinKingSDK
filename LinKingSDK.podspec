#
# Be sure to run `pod lib lint LinKingSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'LinKingSDK'
  s.version          = '0.2.31'
  s.summary          = 'LinKingSDK Quick Integration Solution'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: LinKingSDK is Overseas SDK Quick Integration Solution.
                       DESC

  s.homepage         = 'https://github.com/MrDML/LinKingSDK'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'leaon' => 'leaon' }
  s.source           = { :git => 'https://github.com/MrDML/LinKingSDK.git', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '9.0'
  
  s.static_framework = true

  s.vendored_frameworks = "LinKingSDK/Products/LinKingSDK.framework"
  s.resources = "LinKingSDK/Assets/*.*"
  s.dependency 'SDWebImage', '>= 5.0.0'
  s.dependency 'IQKeyboardManager', '~> 6.5.5'
  s.dependency 'TPKeyboardAvoiding', '~> 1.3.4'
  s.dependency 'TZImagePickerController', '~> 3.5.1'
  s.dependency 'Toast', '~> 4.0.0'
  s.dependency 'Beta-AppsFlyerFramework', '~> 6.0.2.174'
  s.dependency 'AFNetworking', '~> 4.0.1'
  s.dependency 'MQTTClient2', '~> 0.15.6'
  # TOpOn
  s.dependency 'AnyThinkiOS','5.7.44'
  # 穿山甲
  s.dependency 'Ads-CN','3.6.1.1'
  # MintegralAdSDK
  s.dependency 'MintegralAdSDK' ,'6.9.1'
  # 优良汇
  s.dependency 'GDTMobSDK', '4.12.61'
  
  s.dependency 'AnyThinkiOS/AnyThinkPangleAdapter','5.7.44'
  s.dependency 'AnyThinkiOS/AnyThinkMintegralAdapter','5.7.44'
  s.dependency 'MintegralAdSDK/RewardVideoAd','6.9.1'
  s.dependency 'MintegralAdSDK/BidRewardVideoAd','6.9.1'
  s.dependency 'MintegralAdSDK/BidInterstitialVideoAd','6.9.1'
  s.dependency 'MintegralAdSDK/InterstitialVideoAd','6.9.1'
  s.dependency 'MintegralAdSDK/InterstitialAd','6.9.1'
  s.dependency 'MintegralAdSDK/BannerAd' ,'6.9.1'
  s.dependency 'MintegralAdSDK/BidBannerAd','6.9.1'
  s.dependency 'MintegralAdSDK/SplashAd','6.9.1'
  s.dependency 'MintegralAdSDK/NativeAdvancedAd','6.9.1'
  s.dependency 'AnyThinkiOS/AnyThinkGDTAdapter','5.7.44'
  s.xcconfig = {
      'VALID_ARCHS' =>  'arm64 x86_64 armv7',
  }
  # s.resource_bundles = {
  #   'LinKingSDK' => ['LinKingSDK/Assets/*.png']
  # }

  # s.public_header_files = 'Pod/Classes/**/*.h'
  # s.frameworks = 'UIKit', 'MapKit'
  # s.dependency 'AFNetworking', '~> 2.3'
end
