// addr: 0x00cffe70
// name: FUN_00cffe70
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * FUN_00cffe70(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *_Memory;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x20-byte bounds/chunk descriptor from shifted coordinate fields,
                       validates it with another region function, and frees it on validation
                       failure. No class or file evidence identifies the owner. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016115db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar6 = Mem_Alloc(0x20);
  _Memory = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 0x28);
    iVar2 = *(int *)(param_1 + 0x20);
    iVar3 = *(int *)(param_1 + 0x1c);
    iVar4 = *(int *)(param_1 + 0x18);
    puVar6[6] = *(int *)(param_1 + 0x24) >> 6;
    *puVar6 = 0xffffffff;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = iVar4 >> 6;
    puVar6[4] = iVar3 >> 6;
    puVar6[5] = iVar2 >> 6;
    puVar6[7] = iVar1 >> 6;
    _Memory = puVar6;
  }
  local_4 = 0xffffffff;
  cVar5 = FUN_00d04320(_Memory,*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x4c),
                       *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x54));
  if (cVar5 != '\x01') {
    if (_Memory != (undefined4 *)0x0) {
      *_Memory = 0xffffffff;
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    _Memory = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return _Memory;
}

