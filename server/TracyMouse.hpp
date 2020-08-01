#ifndef __TRACYMOUSE_HPP__
#define __TRACYMOUSE_HPP__

#include "../imgui/imgui.h"

namespace tracy
{

void MouseFrame();

bool IsMouseDown( ImGuiMouseButton button );
bool IsMouseClicked( ImGuiMouseButton button );
bool IsMouseDragging( ImGuiMouseButton button );
ImVec2 GetMouseDragDelta( ImGuiMouseButton button );

}

#endif
