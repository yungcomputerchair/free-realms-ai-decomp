// addr: 0x00846120
// name: GuiProperties_GuiWebBrowserCtrl_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * GuiProperties_GuiWebBrowserCtrl_ctor(void * this) */

void * __fastcall GuiProperties_GuiWebBrowserCtrl_ctor(void *this)

{
  undefined4 uVar1;
  
                    /* Constructs GuiProperties<GuiWebBrowserCtrl>, initializes two default property
                       values, installs its vtable, and initializes an embedded
                       SoeUtil::Map<int,int>. The template/class name is explicit in the vtable
                       symbol. */
  uVar1 = _DAT_017efbd4;
  *(undefined4 *)((int)this + 4) = _DAT_017efbd4;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = GuiProperties<GuiWebBrowserCtrl>::vftable;
  *(undefined ***)((int)this + 0x14) = SoeUtil::Map<int,int,-1,0>::vftable;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return this;
}

