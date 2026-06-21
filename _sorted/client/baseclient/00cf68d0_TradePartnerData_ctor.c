// addr: 0x00cf68d0
// name: TradePartnerData_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradePartnerData_ctor(void * this, void * owner) */

void * __thiscall TradePartnerData_ctor(void *this,void *owner)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs helper data for trading by creating ref-counted data sources for
                       partner name and partner coin count, then clearing additional trade state
                       fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016105cd;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)this = owner;
  pvVar1 = Mem_Alloc(0x54);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = GuiDsValue_ctor(PTR_s_BaseClient_Trade_PartnerName_01b7e808);
  }
  local_4 = 0xffffffff;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00c8a080(uVar2);
  local_4 = 1;
  pvVar1 = Mem_Alloc(0x54);
  local_4._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = GuiDsValue_ctor(PTR_s_BaseClient_Trade_PartnerCoinCoun_01b7e80c);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 8) = 0;
  FUN_00c8a080(uVar2);
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

