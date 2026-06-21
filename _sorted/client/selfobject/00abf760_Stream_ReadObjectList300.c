// addr: 0x00abf760
// name: Stream_ReadObjectList300
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Stream_ReadObjectList300(void * reader, void * list) */

void __cdecl Stream_ReadObjectList300(void *reader,void *list)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Clears a list, reads a count, allocates 300-byte objects, deserializes each
                       via FUN_00abeb40, and appends them. Exact object class is unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c5f8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00abf1b0(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
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
  local_14 = 0;
  if (0 < iVar3) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        ExceptionList = local_c;
        return;
      }
      pvVar2 = Mem_Alloc(300);
      puVar4 = (undefined4 *)0x0;
      local_4 = 0;
      if (pvVar2 != (void *)0x0) {
        puVar4 = (undefined4 *)FUN_01070a40(0);
      }
      local_4 = 0xffffffff;
      FUN_00abeb40(reader);
      *puVar4 = *(undefined4 *)((int)list + 4);
      if (*(int *)((int)list + 4) == 0) {
        *(undefined4 **)list = puVar4;
      }
      else {
        *(undefined4 **)(*(int *)((int)list + 4) + 4) = puVar4;
      }
      *(int *)((int)list + 8) = *(int *)((int)list + 8) + 1;
      local_14 = local_14 + 1;
      *(undefined4 **)((int)list + 4) = puVar4;
    } while (local_14 < iVar3);
  }
  ExceptionList = local_c;
  return;
}

