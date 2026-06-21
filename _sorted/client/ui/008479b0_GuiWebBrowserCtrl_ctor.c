// addr: 0x008479b0
// name: GuiWebBrowserCtrl_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiWebBrowserCtrl_ctor(void * this, void * browserHost) */

void * __thiscall GuiWebBrowserCtrl_ctor(void *this,void *browserHost)

{
  undefined **ppuVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GuiWebBrowserCtrl: runs base/control setup, initializes
                       GuiProperties<GuiWebBrowserCtrl>, installs GuiWebBrowserCtrl and handler
                       vtables, initializes URL/history strings, stores the browser host, and seeds
                       allowed/default URL entries. Class name is explicit in vtable symbols. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156f660;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiCustomCtrl_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  GuiProperties_GuiWebBrowserCtrl_ctor((undefined4 *)((int)this + 0x158));
  local_4._0_1_ = 1;
  *(undefined ***)((int)this + 0x178) = GuiWebBrowserHandler::vftable;
  *(undefined ***)this = GuiWebBrowserCtrl::vftable;
  *(undefined ***)((int)this + 4) = GuiWebBrowserCtrl::vftable;
  *(undefined ***)((int)this + 0x24) = GuiWebBrowserCtrl::vftable;
  *(undefined ***)((int)this + 0xe8) = GuiWebBrowserCtrl::vftable;
  *(undefined4 *)((int)this + 0x158) = GuiWebBrowserCtrl::vftable;
  *(undefined ***)((int)this + 0x178) = GuiWebBrowserCtrl::vftable;
  FUN_00847810();
  local_4._0_1_ = 2;
  *(void **)((int)this + 0x264) = browserHost;
  *(undefined4 *)((int)this + 0x268) = 0;
  FUN_0049e15b();
  *(undefined4 *)((int)this + 0x2b0) = DAT_01be1bd0;
  *(undefined4 *)((int)this + 0x2b4) = DAT_01be1bd4;
  *(undefined1 *)((int)this + 0x2b8) = 0;
  *(undefined1 *)((int)this + 0x2b9) = 0;
  *(undefined ***)((int)this + 700) = SoeUtil::IString<unsigned_short>::vftable;
  *(undefined **)((int)this + 0x2c0) = &DAT_01be1b84;
  *(undefined4 *)((int)this + 0x2c8) = 0;
  *(undefined4 *)((int)this + 0x2c4) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  *(undefined1 *)((int)this + 0x2cc) = 1;
  *(undefined1 *)((int)this + 0x2cd) = 0;
  ppuVar1 = &PTR_u_http_____the9_com___01b36ac8;
  do {
    FUN_008475b0(ppuVar1);
    ppuVar1 = ppuVar1 + 1;
  } while ((int)ppuVar1 < 0x1b36ae4);
  ExceptionList = local_c;
  return this;
}

