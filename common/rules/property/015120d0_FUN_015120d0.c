// addr: 0x015120d0
// name: FUN_015120d0
// subsystem: common/rules/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_015120d0(int param_1,char *param_2)

{
  int iVar1;
  FILE *pFVar2;
  void *_Dst;
  size_t _Size;
  
                    /* Opens an output file in wb+ mode, snapshots an internal bit/byte buffer into
                       newly allocated memory, and initializes file-related fields. Class/function
                       identity is unclear from this context alone. */
  if (*(int *)(param_1 + 0x30) != 0) {
    return 0xfffffffe;
  }
  pFVar2 = _fopen(param_2,"wb+");
  *(FILE **)(param_1 + 0x30) = pFVar2;
  if (pFVar2 == (FILE *)0x0) {
    return 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  _Size = ((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + 1;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(int *)(param_1 + 0x38) = iVar1;
  _Dst = _malloc(_Size);
  *(void **)(param_1 + 0x34) = _Dst;
  _memcpy(_Dst,*(void **)(param_1 + 0x14),_Size);
  return 0;
}

