// addr: 0x0090a630
// name: ProfileItemClassDataMap_deserialize
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProfileItemClassDataMap_deserialize(void * this, void * reader) */

void __thiscall ProfileItemClassDataMap_deserialize(void *this,void *reader)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears/initializes a profile item class data map, reads a count,
                       allocates/deserializes each entry, reads a trailing bool at entry+0x31,
                       inserts it, then finalizes through the container vtable. Exact entry fields
                       are inferred from nearby ProfileItemClassData evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158b9e1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008fa0d0(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    iVar3 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    iVar3 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') break;
      iVar2 = FUN_008e45e0();
      iVar5 = 0;
      local_4 = 0;
      if (iVar2 != 0) {
        iVar5 = FUN_008b1d80();
      }
      local_4 = 0xffffffff;
      FUN_008fa4b0(reader);
      if (*(char **)((int)reader + 0xc) < *(char **)((int)reader + 8) + 1) {
        *(undefined1 *)(iVar5 + 0x31) = 0;
        *(undefined1 *)((int)reader + 0x10) = 1;
        *(undefined4 *)((int)reader + 8) = *(undefined4 *)((int)reader + 0xc);
      }
      else {
        *(bool *)(iVar5 + 0x31) = **(char **)((int)reader + 8) != '\0';
        *(int *)((int)reader + 8) = *(int *)((int)reader + 8) + 1;
      }
      FUN_008fc5e0(iVar5);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  (**(code **)(*(int *)this + 0x10))();
  ExceptionList = local_c;
  return;
}

