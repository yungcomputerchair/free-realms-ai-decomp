// addr: 0x012b5330
// name: UIntVector_assign
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall UIntVector_assign(int param_1,int param_2)

{
  void *first;
  void *_Memory;
  char cVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
                    /* Assigns one uint vector to another, reusing capacity when possible,
                       reallocating when needed, copying elements, and updating the end pointer. */
  if (param_1 == param_2) {
    return param_1;
  }
  pvVar2 = *(void **)(param_2 + 4);
  if (pvVar2 != (void *)0x0) {
    uVar5 = *(int *)(param_2 + 8) - (int)pvVar2 >> 2;
    if (uVar5 != 0) {
      _Memory = *(void **)(param_1 + 4);
      if (_Memory == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(param_1 + 8) - (int)_Memory >> 2;
      }
      if (uVar5 <= uVar3) {
        UIntVector_uninitializedCopyNonEmpty(pvVar2,*(int *)(param_2 + 8),_Memory);
        if (*(int *)(param_2 + 4) == 0) {
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 4);
          return param_1;
        }
        *(int *)(param_1 + 8) =
             *(int *)(param_1 + 4) + (*(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2) * 4;
        return param_1;
      }
      if (_Memory == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)(param_1 + 0xc) - (int)_Memory >> 2;
      }
      if (uVar3 < uVar5) {
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)(param_2 + 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4) >> 2;
        }
        cVar1 = FUN_01260e40(iVar4);
        if (cVar1 == '\0') {
          return param_1;
        }
        pvVar2 = UIntVector_uninitializedCopy
                           (*(void **)(param_2 + 4),*(int *)(param_2 + 8),*(void **)(param_1 + 4));
        *(void **)(param_1 + 8) = pvVar2;
        return param_1;
      }
      if (_Memory == (void *)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 8) - (int)_Memory >> 2;
      }
      first = (void *)((int)pvVar2 + iVar4 * 4);
      UIntVector_uninitializedCopyNonEmpty(pvVar2,(int)first,_Memory);
      pvVar2 = UIntVector_uninitializedCopy(first,*(int *)(param_2 + 8),*(void **)(param_1 + 8));
      *(void **)(param_1 + 8) = pvVar2;
      return param_1;
    }
  }
  FUN_012b2fe0();
  return param_1;
}

