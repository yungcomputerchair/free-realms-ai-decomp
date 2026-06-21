// addr: 0x0091c5e0
// name: RewardList_addReward
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RewardList_addReward(int * rewardList, int * reward) */

void __thiscall RewardList_addReward(void *this,int *rewardList,int *reward)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  
                    /* Appends a reward node to a doubly-linked list and optionally logs 'ADDING
                       Reward Type=...' with reward fields. The log string names the reward domain
                       and the code updates list head/tail/count fields. */
  if (*(char *)((int)this + 0x45) != '\0') {
    iVar1 = rewardList[6];
    iVar2 = *(int *)this;
    iVar3 = rewardList[10];
    iVar4 = rewardList[9];
    uVar6 = (**(code **)(*rewardList + 0x18))();
    uVar6 = (**(code **)(*rewardList + 0x10))(iVar1,iVar4,iVar3,uVar6);
    uVar5 = (**(code **)(*rewardList + 8))(uVar6);
    uVar6 = (**(code **)(*rewardList + 4))(uVar5);
    (**(code **)(iVar2 + 0xc4))
              (this,
               "ADDING Reward Type=%d, Hidden=%d,NameID=%d,IconId=%d,Param1=%d,Param2=%d,Qty=%d",
               uVar6);
  }
  rewardList[1] = *(int *)((int)this + 0x3c);
  if (*(int *)((int)this + 0x3c) != 0) {
    *(int **)(*(int *)((int)this + 0x3c) + 8) = rewardList;
    *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
    *(int **)((int)this + 0x3c) = rewardList;
    return;
  }
  *(int *)((int)this + 0x40) = *(int *)((int)this + 0x40) + 1;
  *(int **)((int)this + 0x38) = rewardList;
  *(int **)((int)this + 0x3c) = rewardList;
  return;
}

