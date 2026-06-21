// addr: 0x00ab3620
// name: Stream_ReadHousingFixtureRefList
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadHousingFixtureRefList(void * reader, void * list) */

void __cdecl Stream_ReadHousingFixtureRefList(void *reader,void *list)

{
  int *piVar1;
  void *this;
  int iVar2;
  undefined4 *this_00;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a list, reads a count, allocates HousingFixtureRef objects,
                       deserializes each, and appends them. HousingFixtureRef type is inferred from
                       the constructor/deserializer callees. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c461b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00ab2430();
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    iVar2 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    iVar2 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  local_18 = 0;
  if (0 < iVar2) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        ExceptionList = local_c;
        return;
      }
      this = Mem_Alloc(0x40);
      this_00 = (undefined4 *)0x0;
      local_4 = 0;
      if (this != (void *)0x0) {
        this_00 = HousingFixtureRef_ctor(this,DAT_01be7bb0,DAT_01be7bb4,(void *)0x0);
      }
      local_4 = 0xffffffff;
      HousingFixtureRef_deserialize(this_00,reader);
      *this_00 = *(undefined4 *)((int)list + 4);
      if (*(int *)((int)list + 4) == 0) {
        *(undefined4 **)list = this_00;
      }
      else {
        *(undefined4 **)(*(int *)((int)list + 4) + 4) = this_00;
      }
      *(int *)((int)list + 8) = *(int *)((int)list + 8) + 1;
      local_18 = local_18 + 1;
      *(undefined4 **)((int)list + 4) = this_00;
    } while (local_18 < iVar2);
  }
  ExceptionList = local_c;
  return;
}

