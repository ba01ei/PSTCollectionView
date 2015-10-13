Pod::Spec.new do |s|
  s.name = 'PSTImprovedCollectionView'
  s.version = "--no-publish"
  s.summary = 'Open source replacement UICollectionView forked from steipete/PSTCollectionView, with some additional features. '
  s.author = {'Bao Lei' => 'bao.lei@me.com'}
  s.homepage = "https://github.com/ba01ei/PSTImprovedCollectionView"
  s.license = {
    :type => 'MIT',
    :file => 'LICENSE'
  }
  s.source = {
    :git => 'https://github.com/ba01ei/PSTImprovedCollectionView.git',
    :tag => "--no-publish" }
  }
  s.platform = :ios, '4.3'
  s.source_files = 'PSTCollectionView/'
  s.frameworks = 'UIKit', 'QuartzCore'
  s.requires_arc = true
end
