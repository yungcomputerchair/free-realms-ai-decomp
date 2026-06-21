// addr: 0x010a44f0
// name: FUN_010a44f0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_010a44f0(int param_1,uint param_2,int *param_3,int param_4,undefined1 param_5)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *extraout_EAX;
  int *array;
  int *piVar4;
  int iVar5;
  uint unaff_EDI;
  
                    /* Small state transition helper: conditionally updates an object through
                       010a40/41 routines and records a relationship between two inputs. */
  piVar1 = (int *)(*(int *)(param_1 + 0xc) + param_2 * 0xc);
  piVar3 = (int *)piVar1[1];
  if (param_3 != piVar3) {
    if (piVar3 != (int *)0x0) {
      piVar4 = (int *)(param_1 + 0x7c);
      find_first_sorted_pair_index(piVar4,piVar3,unaff_EDI);
      array = extraout_EAX;
      if (*(int **)(*piVar4 + (int)extraout_EAX * 8) != piVar3) {
        array = (int *)0xffffffff;
      }
      sorted_pair_array_remove_at(piVar4,array,unaff_EDI);
    }
    sorted_pair_array_insert((void *)(param_1 + 0x7c),param_3,param_2,unaff_EDI);
  }
  piVar3 = (int *)*piVar1;
  *piVar1 = param_4;
  piVar4 = (int *)(param_4 + 4);
  LOCK();
  *piVar4 = *piVar4 + 1;
  UNLOCK();
  iVar5 = CONCAT31((int3)((uint)piVar4 >> 8),param_5);
  piVar1[1] = (int)param_3;
  *(undefined1 *)(piVar1 + 2) = param_5;
  if (piVar3 != (int *)0x0) {
    piVar1 = piVar3 + 1;
    LOCK();
    iVar2 = *piVar1;
    iVar5 = *piVar1;
    *piVar1 = iVar2 + -1;
    UNLOCK();
    if (iVar2 + -1 == 0) {
      iVar5 = (**(code **)(*piVar3 + 4))();
    }
  }
  return iVar5;
}

