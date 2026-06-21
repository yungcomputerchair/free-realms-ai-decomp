// addr: 0x010ce760
// name: GuiProperties_GuiTradingCardCtrl_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * GuiProperties_GuiTradingCardCtrl_ctor(void * this) */

void * __fastcall GuiProperties_GuiTradingCardCtrl_ctor(void *this)

{
  undefined4 uVar1;
  
                    /* Constructs GuiProperties<GuiTradingCardCtrl>, initializes default property
                       fields, installs its vtable, and initializes an embedded
                       SoeUtil::Map<int,int>. The template class is explicit in the vtable symbol.
                        */
  uVar1 = _DAT_017efbd4;
  *(undefined4 *)((int)this + 4) = _DAT_017efbd4;
  *(undefined4 *)((int)this + 8) = uVar1;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined ***)this = GuiProperties<GuiTradingCardCtrl>::vftable;
  *(undefined ***)((int)this + 0x14) = SoeUtil::Map<int,int,-1,0>::vftable;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return this;
}

