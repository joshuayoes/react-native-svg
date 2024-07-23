#pragma once
#include "MaskView.g.h"
#include "GroupView.h"

namespace winrt::RNSVG::implementation {
struct MaskView : MaskViewT<MaskView, RNSVG::implementation::GroupView> {
 public:
  MaskView() = default;

  // RenderableView
  void Draw(RNSVG::D2DDeviceContext const & /*deviceContext*/, Windows::Foundation::Size const & /*size*/){};
};
} // namespace winrt::RNSVG::implementation

namespace winrt::RNSVG::factory_implementation {
struct MaskView : MaskViewT<MaskView, implementation::MaskView> {};
} // namespace winrt::RNSVG::factory_implementation
