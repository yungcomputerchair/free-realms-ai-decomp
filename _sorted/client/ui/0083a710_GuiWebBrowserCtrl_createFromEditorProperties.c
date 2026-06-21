// addr: 0x0083a710
// name: GuiWebBrowserCtrl_createFromEditorProperties
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiWebBrowserCtrl_createFromEditorProperties(bool useProperties_, int
   parent_) */

void * __cdecl GuiWebBrowserCtrl_createFromEditorProperties(bool useProperties_,int parent_)

{
  void *this;
  void *pvVar1;
  undefined1 *puVar2;
  char *pcVar3;
  int *piVar4;
  undefined3 in_stack_00000005;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Allocates and constructs a GuiWebBrowserCtrl, names/configures it as
                       webbrowser, applies a default property block, and sets its UriHomePage
                       property to a localized value or about:blank. Used by UI editor/control
                       creation. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156de56;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = (void *)FUN_008453e0(0x2d0,DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  if (this == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = Mem_Alloc(0x1050);
    local_4._0_1_ = 1;
    if (pvVar1 == (void *)0x0) {
      local_4 = (uint)local_4._1_3_ << 8;
      pvVar1 = GuiWebBrowserCtrl_ctor(this,(void *)0x0);
    }
    else {
      pvVar1 = (void *)FUN_00863000();
      local_4 = (uint)local_4._1_3_ << 8;
      pvVar1 = GuiWebBrowserCtrl_ctor(this,pvVar1);
    }
  }
  local_4 = 0xffffffff;
  if (_useProperties_ != 0) {
    puVar2 = (undefined1 *)FUN_00d517f0(&DAT_017ea850);
    if (puVar2 != (undefined1 *)0x0) goto LAB_0083a7c0;
  }
  puVar2 = &DAT_0175b400;
LAB_0083a7c0:
  FUN_0083a060(pvVar1,"webbrowser",puVar2,parent_);
  if (pvVar1 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)((int)pvVar1 + 0x158);
  }
  if ((_useProperties_ == 0) || (PTR_s_UriHomePage_01b353b8 == (undefined *)0x0)) {
    pcVar3 = "";
  }
  else {
    pcVar3 = (char *)FUN_00d517f0(PTR_s_UriHomePage_01b353b8);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "about:blank";
    }
  }
  (**(code **)(*piVar4 + 0x14))(0x43,pcVar3);
  ExceptionList = this;
  return pvVar1;
}

