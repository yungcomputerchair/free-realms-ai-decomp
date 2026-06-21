// addr: 0x00a79880
// name: TooltipDataSource_ctor
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TooltipDataSource_ctor(void * this, int nameOrOwner_) */

void * __thiscall TooltipDataSource_ctor(void *this,int nameOrOwner_)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs TooltipDataSource as a GuiDsTable-derived data source, initializes
                       its node array, ensures three rows, notifies, and creates default columns
                       Column0-2 with Value0-2. Class and default column strings are explicit. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015bb264;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,(void *)nameOrOwner_);
  local_4 = 0;
  FUN_0081b470(uVar1);
  *(undefined ***)this = TooltipDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = TooltipDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = TooltipDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = TooltipDataSource::vftable;
  *(undefined ***)((int)this + 0x270) = SoeUtil::Array<TooltipDataSource::Node,0,1>::vftable;
  *(undefined4 *)((int)this + 0x274) = 0;
  *(undefined4 *)((int)this + 0x278) = 0;
  *(undefined4 *)((int)this + 0x27c) = 0;
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),2);
  *(undefined4 *)((int)this + 0x280) = 0;
  *(undefined4 *)((int)this + 0x284) = 0;
  *(undefined4 *)((int)this + 0x288) = 0;
  *(undefined1 *)((int)this + 0x28c) = 0;
  *(undefined4 *)((int)this + 0x290) = 0;
  *(undefined4 *)((int)this + 0x294) = 0;
  if (*(int *)((int)this + 0x278) < 3) {
    FUN_00a76870(3);
  }
  else {
    FUN_00a75d50(*(int *)((int)this + 0x278) + -3);
  }
  (**(code **)(*(int *)this + 0x10))();
  FUN_00a76470(0,"Column0",L"Value0",1);
  FUN_00a76470(1,"Column1",L"Value1",1);
  FUN_00a76470(2,"Column2",L"Value2",1);
  ExceptionList = local_c;
  return this;
}

