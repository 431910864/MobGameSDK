#
# Be sure to run `pod lib lint MobGameSDK.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'MobGameSDK'
  s.version          = '1.0.3'
  s.summary          = 'MobGameSDK.'
  s.description      = <<-DESC
  Game SDK.
                       DESC

  s.author           = { 'ad' => 'ad@ad.com' }
  s.homepage         = 'https://gitee.com/mobad/MobGameSDK'
  s.source           = { :git => 'https://gitee.com/mobad/MobGameSDK.git', :tag => s.version.to_s }
  s.platform         = :ios, "9.0"  

  s.vendored_frameworks = 'MobGameSDK/Frameworks/MobGameSDK.framework'
  s.resources = ['MobGameSDK/Frameworks/MobGameSDKBundle.bundle', 'MobGameSDK/Frameworks/DyAdSdk.bundle']
  valid_archs = ['armv7', 'arm64']
end
