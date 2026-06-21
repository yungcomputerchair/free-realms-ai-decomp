// addr: 0x0044d449
// name: ClientWindow_dispatchSystemCommand
// subsystem: common/client/window
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ClientWindow_dispatchSystemCommand(void * this, int commandKind_, uint x_,
   int y_, int detail_) */

int __thiscall
ClientWindow_dispatchSystemCommand(void *this,int commandKind_,uint x_,int y_,int detail_)

{
  int iVar1;
  undefined4 msg_;
  uint uVar2;
  bool active_;
  int *lParam_;
  tagRECT local_2c;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_8;
  
                    /* Translates internal command kinds into Win32 WM_SYSCOMMAND values such as
                       SC_MINIMIZE, SC_MAXIMIZE, SC_MOVE, SC_SIZE, SC_NEXTWINDOW, SC_PREVWINDOW, and
                       SC_RESTORE, using window-rect-relative coordinates. It also updates internal
                       minimize/maximize/restore state and activates/deactivates child windows
                       through 0044d34d. */
  if (*(char *)((int)this + 0x3c) != '\0') {
    return 0;
  }
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  GetWindowRect(*(HWND *)((int)this + 0x34),&local_2c);
  lParam_ = &local_1c;
  (**(code **)(*(int *)this + 0xd8))();
  uVar2 = local_2c.left + local_1c + x_;
  local_8 = local_2c.top + local_18 + y_;
  switch(commandKind_) {
  case 0:
    (**(code **)(*(int *)this + 0x40))();
    return 1;
  case 1:
    iVar1 = *(int *)((int)this + 200);
    if (iVar1 == 1) {
      return 0;
    }
    if (iVar1 != 2) {
      *(int *)((int)this + 0xd0) = iVar1;
    }
    *(int *)((int)this + 0xcc) = iVar1;
    *(int *)((int)this + 200) = 1;
    if (*(char *)((int)this + 0xd4) != '\0') {
      return 1;
    }
    ClientWindow_callDefaultWindowProc
              (*(undefined4 *)((int)this + 0x34),0xf020,local_8 * 0x10000 | uVar2 & 0xffff,lParam_);
    active_ = false;
    goto LAB_0044d51a;
  case 2:
    iVar1 = *(int *)((int)this + 200);
    if (iVar1 == 2) {
      return 0;
    }
    if (iVar1 != 1) {
      *(int *)((int)this + 0xd0) = iVar1;
    }
    *(int *)((int)this + 0xcc) = iVar1;
    *(undefined4 *)((int)this + 200) = 2;
    *(undefined1 *)((int)this + 0xd4) = 0;
    ClientWindow_callDefaultWindowProc
              (*(undefined4 *)((int)this + 0x34),0xf030,local_8 * 0x10000 | uVar2 & 0xffff,lParam_);
    if (iVar1 == 0) {
      return 1;
    }
    active_ = true;
LAB_0044d51a:
    ClientWindow_setChildWindowsActive(this,active_);
    return 1;
  case 3:
    if (*(int *)((int)this + 200) != 0) {
      return 0;
    }
    *(undefined4 *)((int)this + 0xcc) = 0;
    *(undefined4 *)((int)this + 0xd0) = 0;
    *(int *)((int)this + 200) = 3;
    *(undefined1 *)((int)this + 0xd4) = 0;
    ClientWindow_setChildWindowsActive(this,false);
    return -1;
  case 4:
    iVar1 = *(int *)((int)this + 200);
    if (iVar1 == 1) {
      if ((*(int *)((int)this + 0xcc) == 0) || (*(int *)((int)this + 0xcc) == 2)) {
        ClientWindow_setChildWindowsActive(this,true);
      }
      *(int *)((int)this + 200) = *(int *)((int)this + 0xcc);
      if (*(int *)((int)this + 0xcc) == 3) {
        *(undefined4 *)((int)this + 0xd0) = 0;
      }
      *(undefined4 *)((int)this + 0xcc) = 1;
    }
    else {
      if (iVar1 != 2) {
        if (iVar1 != 3) {
          return 0;
        }
        ClientWindow_setChildWindowsActive(this,true);
        *(undefined4 *)((int)this + 200) = 0;
        *(undefined4 *)((int)this + 0xd0) = 3;
        *(undefined4 *)((int)this + 0xcc) = 3;
        *(undefined1 *)((int)this + 0xd4) = 0;
        return -1;
      }
      if (*(int *)((int)this + 0xd0) == 0) {
        ClientWindow_setChildWindowsActive(this,true);
      }
      *(int *)((int)this + 200) = *(int *)((int)this + 0xd0);
      if (*(int *)((int)this + 0xd0) == 3) {
        *(undefined4 *)((int)this + 0xd0) = 0;
      }
      *(undefined4 *)((int)this + 0xcc) = 2;
    }
    uVar2 = local_8 << 0x10 | uVar2 & 0xffff;
    *(undefined1 *)((int)this + 0xd4) = 0;
    msg_ = 0xf120;
    break;
  case 5:
    msg_ = 0xf010;
    if (detail_ != 0) {
      if (detail_ == 1) {
        msg_ = 0xf012;
      }
      else if (detail_ == 2) {
        msg_ = 0xf011;
      }
    }
    uVar2 = local_8 * 0x10000 | uVar2 & 0xffff;
    break;
  case 6:
    msg_ = 0xf000;
    switch(detail_) {
    case 1:
      msg_ = 0xf001;
      break;
    case 2:
      msg_ = 0xf002;
      break;
    case 3:
      msg_ = 0xf003;
      break;
    case 4:
      msg_ = 0xf004;
      break;
    case 5:
      msg_ = 0xf005;
      break;
    case 6:
      msg_ = 0xf006;
      break;
    case 7:
      msg_ = 0xf007;
      break;
    case 8:
      msg_ = 0xf008;
    }
    x_ = uVar2;
    goto LAB_0044d772;
  case 7:
    uVar2 = local_8 * 0x10000 | uVar2 & 0xffff;
    msg_ = 0xf040;
    break;
  case 8:
    uVar2 = local_8 * 0x10000 | uVar2 & 0xffff;
    msg_ = 0xf050;
    break;
  case 9:
    if (detail_ == 0) {
      msg_ = *(undefined4 *)((int)this + 0x34);
      x_ = uVar2;
    }
    else {
      local_8 = y_;
      if (detail_ == 1) {
        msg_ = 0xf100;
      }
      else {
        if (detail_ != 2) {
          return 1;
        }
        msg_ = 0xf090;
      }
    }
LAB_0044d772:
    uVar2 = local_8 << 0x10 | x_ & 0xffff;
    break;
  default:
    return 0;
  }
  ClientWindow_callDefaultWindowProc(*(undefined4 *)((int)this + 0x34),msg_,uVar2,lParam_);
  return 1;
}

