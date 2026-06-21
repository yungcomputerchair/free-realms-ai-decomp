// addr: 0x00ab6640
// name: HousingFixtureRefMap_insert
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void HousingFixtureRefMap_insert(void * this, uint guidPart_) */

void __thiscall HousingFixtureRefMap_insert(void *this,uint guidPart_)

{
  void *pvVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Allocates a HousingFixtureRef, appends it to list order, and links it into a
                       0x400-bucket hash table keyed by its guid/id field at +0x24. Name is inferred
                       from the HousingFixtureRef ctor. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015c4dd1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = (void *)(**(code **)(*(int *)this + 4))(DAT_01b839d8 ^ (uint)&stack0xffffffe8);
  uStack_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = HousingFixtureRef_ctorWithGuid(pvVar1,(uint *)guidPart_);
  }
  *(undefined4 *)((int)pvVar1 + 0x20) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)((int)pvVar1 + 0x1c) = 0;
  if (*(int *)((int)this + 0xc) == 0) {
    *(void **)((int)this + 8) = pvVar1;
  }
  else {
    *(void **)(*(int *)((int)this + 0xc) + 0x1c) = pvVar1;
  }
  *(void **)((int)this + 0xc) = pvVar1;
  uVar2 = *(uint *)((int)pvVar1 + 0x24) & 0x3ff;
  *(undefined4 *)((int)pvVar1 + 0x28) = *(undefined4 *)((int)this + uVar2 * 4 + 0x14);
  *(void **)((int)this + uVar2 * 4 + 0x14) = pvVar1;
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  ExceptionList = local_c;
  return;
}

