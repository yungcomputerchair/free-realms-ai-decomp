// addr: 0x00f527c0
// name: init_all_even_diag
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* private: void __thiscall Chess::init_all_even_diag(unsigned __int64 *) */

void __thiscall Chess::init_all_even_diag(Chess *this,__uint64 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
                    /* Preserves the existing identified symbol init_all_even_diag; code initializes
                       or operates on that class and is queued for sidecar write-back. */
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  iVar2 = 2;
  do {
    if ((iVar2 + -2 < 0x10) || (0x2f < iVar2 + -2)) {
      uVar3 = __allshl();
      *(uint *)param_1 = (uint)*param_1 | (uint)uVar3;
      *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) | (uint)((ulonglong)uVar3 >> 0x20);
    }
    if ((iVar2 + -1 < 0x10) || (0x2f < iVar2 + -1)) {
      uVar3 = __allshl();
      *(uint *)param_1 = (uint)*param_1 | (uint)uVar3;
      *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) | (uint)((ulonglong)uVar3 >> 0x20);
    }
    if ((iVar2 < 0x10) || (0x2f < iVar2)) {
      uVar3 = __allshl();
      *(uint *)param_1 = (uint)*param_1 | (uint)uVar3;
      *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) | (uint)((ulonglong)uVar3 >> 0x20);
    }
    if ((iVar2 + 1 < 0x10) || (0x2f < iVar2 + 1)) {
      uVar3 = __allshl();
      *(uint *)param_1 = (uint)*param_1 | (uint)uVar3;
      *(uint *)((int)param_1 + 4) = *(uint *)((int)param_1 + 4) | (uint)((ulonglong)uVar3 >> 0x20);
    }
    iVar1 = iVar2 + 2;
    iVar2 = iVar2 + 4;
  } while (iVar1 < 0x40);
  return;
}

