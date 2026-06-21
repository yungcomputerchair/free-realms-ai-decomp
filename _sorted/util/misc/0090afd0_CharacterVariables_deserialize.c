// addr: 0x0090afd0
// name: CharacterVariables_deserialize
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CharacterVariables_deserialize(void * reader, void * characterVariables)
    */

void __cdecl CharacterVariables_deserialize(void *reader,void *characterVariables)

{
  int *piVar1;
  uint *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int local_18;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Deserializes a count of character variable entries, each with a hash/id and
                       SoeUtil_IString value, then links them into both insertion order and a
                       16-bucket hash table. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158ba3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_008e9d20(DAT_01b839d8 ^ (uint)&stack0xffffffd8);
  piVar1 = *(int **)((int)reader + 8) + 1;
  if (*(int **)((int)reader + 0xc) < piVar1) {
    local_18 = 0;
    *(undefined1 *)((int)reader + 0x10) = 1;
    *(int **)((int)reader + 8) = *(int **)((int)reader + 0xc);
  }
  else {
    local_18 = **(int **)((int)reader + 8);
    *(int **)((int)reader + 8) = piVar1;
  }
  local_14 = 0;
  if (0 < local_18) {
    do {
      if (*(char *)((int)reader + 0x10) != '\0') {
        ExceptionList = local_c;
        return;
      }
      puVar2 = *(uint **)((int)reader + 8) + 1;
      if (*(uint **)((int)reader + 0xc) < puVar2) {
        uVar4 = 0;
        *(undefined1 *)((int)reader + 0x10) = 1;
        *(uint **)((int)reader + 8) = *(uint **)((int)reader + 0xc);
      }
      else {
        uVar4 = **(uint **)((int)reader + 8);
        *(uint **)((int)reader + 8) = puVar2;
      }
      pvVar3 = Mem_Alloc(0x24);
      iVar5 = 0;
      local_4 = 0;
      if (pvVar3 != (void *)0x0) {
        iVar5 = SoeUtil_IString_char_ctor();
      }
      local_4 = 0xffffffff;
      FUN_008ea0e0(reader);
      *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)((int)characterVariables + 8);
      if (*(int *)((int)characterVariables + 8) == 0) {
        *(int *)((int)characterVariables + 4) = iVar5;
      }
      else {
        *(int *)(*(int *)((int)characterVariables + 8) + 0x20) = iVar5;
      }
      *(int *)((int)characterVariables + 8) = iVar5;
      *(uint *)(iVar5 + 0x18) = uVar4;
      *(undefined4 *)(iVar5 + 0x14) =
           *(undefined4 *)((int)characterVariables + (uVar4 & 0xf) * 4 + 0x10);
      *(int *)((int)characterVariables + (uVar4 & 0xf) * 4 + 0x10) = iVar5;
      *(int *)((int)characterVariables + 0xc) = *(int *)((int)characterVariables + 0xc) + 1;
      local_14 = local_14 + 1;
    } while (local_14 < local_18);
  }
  ExceptionList = local_c;
  return;
}

