// addr: 0x008fc680
// name: ProfileItemSubrecordList_deserialize
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProfileItemSubrecordList_deserialize(void * reader, void * list) */

void __cdecl ProfileItemSubrecordList_deserialize(void *reader,void *list)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
                    /* Clears a list, reads a count, appends entries, and deserializes each unknown
                       subrecord using 008db930. It is called from ProfileItem_deserialize. */
  iVar2 = *(int *)((int)list + 4);
  while (iVar2 != 0) {
    FUN_008d9aa0(iVar2);
    iVar2 = *(int *)((int)list + 4);
  }
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
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        return;
      }
      FUN_008c1ee0();
      FUN_008db930(reader);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  return;
}

