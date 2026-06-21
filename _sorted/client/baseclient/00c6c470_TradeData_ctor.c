// addr: 0x00c6c470
// name: TradeData_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TradeData_ctor(void * this, void * owner) */

void * __thiscall TradeData_ctor(void *this,void *owner)

{
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes trade-related state, default values, a list member, and allocates
                       the helper containing partner name/coin-count data sources. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01600b86;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(void **)this = owner;
  *(undefined4 *)((int)this + 4) = 0xffffffff;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = DAT_01bee968;
  *(undefined4 *)((int)this + 0x14) = DAT_01bee96c;
  FUN_0070bac0(uVar1);
  local_4 = 0;
  pvVar2 = Mem_Alloc(0x18);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = TradePartnerData_ctor(pvVar2,owner);
  }
  *(void **)((int)this + 0xa0) = pvVar2;
  ExceptionList = local_c;
  return this;
}

