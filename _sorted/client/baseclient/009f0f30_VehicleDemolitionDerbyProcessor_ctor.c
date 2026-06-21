// addr: 0x009f0f30
// name: VehicleDemolitionDerbyProcessor_ctor
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * VehicleDemolitionDerbyProcessor_ctor(void * this, void * client) */

void * __thiscall VehicleDemolitionDerbyProcessor_ctor(void *this,void *client)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the demolition derby game processor, including
                       DemolitionDerbyConfig and VehicleDemolitionDerbyResultsDataSource members.
                       The function is reached from the main base-client initialization path. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015a8bcc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = VehicleDemolitionDerbyProcessor::vftable;
  *(void **)((int)this + 4) = client;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  DemolitionDerbyConfig_ctor((void *)((int)this + 0x10));
  *(undefined1 *)((int)this + 0xb8) = 0;
  *(undefined1 *)((int)this + 0xb9) = 0;
  *(undefined1 *)((int)this + 0xcd) = 0;
  *(undefined1 *)((int)this + 0xce) = 0;
  *(undefined1 *)((int)this + 0xcf) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 200) = 4;
  *(undefined1 *)((int)this + 0xcc) = 1;
  *(undefined ***)((int)this + 0x174) = SoeUtil::List<ProxiedVehicleDemolitionDerby,-1>::vftable;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined ***)((int)this + 0x188) =
       SoeUtil::List<ProxiedVehicleDemolitionDerbyPickup,-1>::vftable;
  *(undefined4 *)((int)this + 0x194) = 0;
  *(undefined4 *)((int)this + 0x18c) = 0;
  *(undefined4 *)((int)this + 400) = 0;
  *(undefined ***)((int)this + 0x19c) = SoeUtil::List<DerbyInfo,-1>::vftable;
  *(undefined4 *)((int)this + 0x1a8) = 0;
  *(undefined4 *)((int)this + 0x1a0) = 0;
  *(undefined4 *)((int)this + 0x1a4) = 0;
  *(undefined ***)((int)this + 0x1ac) = SoeUtil::List<DerbyResultsStruct,-1>::vftable;
  *(undefined4 *)((int)this + 0x1b8) = 0;
  *(undefined4 *)((int)this + 0x1b0) = 0;
  *(undefined4 *)((int)this + 0x1b4) = 0;
  local_4._1_3_ = 0;
  *(undefined4 *)((int)this + 0x1bc) = 0;
  local_4._0_1_ = 5;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x198) = 0;
  pvVar1 = Mem_Alloc(0x268);
  local_4._0_1_ = 6;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = VehicleDemolitionDerbyResultsDataSource_ctor(pvVar1,this);
  }
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_009eb540(pvVar1);
  ExceptionList = local_c;
  return this;
}

