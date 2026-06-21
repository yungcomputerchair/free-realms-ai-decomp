// addr: 0x0137b990
// name: FUN_0137b990
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FormatSpecificData_applyNameValueMap(void * this, void * map) */

void __thiscall FormatSpecificData_applyNameValueMap(void *this,void *map)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Lazily creates format-specific data storage, sets its version, then iterates
                       a map and applies each key/value through a virtual setter. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01681d0b;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x10) == 0) {
    pvVar5 = Mem_Alloc(0x44);
    local_4 = 0;
    if (pvVar5 == (void *)0x0) {
      pvVar5 = (void *)0x0;
    }
    else {
      pvVar5 = (void *)FormatSpecificData_ctor();
    }
    local_4 = 0xffffffff;
    *(void **)((int)this + 0x10) = pvVar5;
    FormatSpecificData_setVersion(pvVar5,*(int *)((int)this + 0xc));
  }
  piVar1 = *(int **)((int)map + 4);
  piVar2 = (int *)*piVar1;
  while( true ) {
    if (map == (void *)0x0) {
      FUN_00d83c2d(uVar4);
    }
    if (piVar2 == piVar1) break;
    if (map == (void *)0x0) {
      FUN_00d83c2d(uVar4);
    }
    if (piVar2 == (int *)*(int *)((int)map + 4)) {
      FUN_00d83c2d(uVar4);
    }
    uVar3 = piVar2[3];
    if (piVar2 == (int *)*(int *)((int)map + 4)) {
      FUN_00d83c2d();
    }
    (**(code **)(*(int *)this + 0x90))(uVar3,piVar2 + 4);
    FUN_01313720();
  }
  FUN_014315f0();
  ExceptionList = local_c;
  return;
}

