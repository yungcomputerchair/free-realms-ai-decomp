// addr: 0x010cee90
// name: GuiTradingCardCtrl_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GuiTradingCardCtrl_ctor(void * this) */

void * __fastcall GuiTradingCardCtrl_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs GuiTradingCardCtrl by running base/control setup, constructing
                       GuiProperties<GuiTradingCardCtrl>, installing several GuiTradingCardCtrl
                       vtable subobjects, and clearing state flags. Class name is explicit in vtable
                       symbols. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0164adc6;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GuiCustomCtrl_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  local_4 = 0;
  GuiProperties_GuiTradingCardCtrl_ctor((undefined4 *)((int)this + 0x158));
  *(undefined ***)this = GuiTradingCardCtrl::vftable;
  *(undefined ***)((int)this + 4) = GuiTradingCardCtrl::vftable;
  *(undefined ***)((int)this + 0x24) = GuiTradingCardCtrl::vftable;
  *(undefined ***)((int)this + 0xe8) = GuiTradingCardCtrl::vftable;
  *(undefined4 *)((int)this + 0x158) = GuiTradingCardCtrl::vftable;
  *(undefined1 *)((int)this + 0x188) = 0;
  *(undefined1 *)((int)this + 0x189) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  ExceptionList = local_c;
  return this;
}

