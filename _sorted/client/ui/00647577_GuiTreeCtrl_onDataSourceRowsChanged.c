// addr: 0x00647577
// name: GuiTreeCtrl_onDataSourceRowsChanged
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint GuiTreeCtrl_onDataSourceRowsChanged(void * this, uint changeMask_, uint
   nodeId_, int firstChild_, int childCount_, int insertedCount_, void * arg7, void * arg8, void *
   arg9, bool notify_) */

uint __thiscall
GuiTreeCtrl_onDataSourceRowsChanged
          (void *this,uint changeMask_,uint nodeId_,int firstChild_,int childCount_,
          int insertedCount_,void *arg7,void *arg8,void *arg9,bool notify_)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined1 local_54 [4];
  undefined4 local_50;
  int local_4c;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
                    /* Handles tree data-source row insert/remove/change notifications, adjusts row
                       indexes and expanded-child counts, and calls the tree control notification
                       vfunc. Evidence is called by GuiDataSource/GiuTreeDataSource notify
                       add/remove/reset functions. */
  local_c = 0xffffffff;
  local_10 = 0;
  local_8 = 0;
  local_14 = 0;
  if (changeMask_ == 0) {
LAB_006478db:
    uVar4 = (**(code **)(*(int *)this + 0x27c))
                      (arg7,arg8,arg9,5,local_c - local_14,local_10 + local_14,notify_);
  }
  else {
    if (nodeId_ == 0) {
      piVar2 = (int *)FUN_00616f24(this);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 0xc))();
      }
      FUN_00627e46(0);
      uVar3 = FUN_00627e46(piVar2);
      if (piVar2 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar2 + 0x10))(0);
      }
    }
    else {
      uVar4 = FUN_00641b47(nodeId_);
      local_1c = uVar4;
      if ((int)uVar4 < 0) {
        local_18 = 0;
        if (*(int **)((int)this + 0x1d0) != (int *)0x0) {
          (**(code **)(**(int **)((int)this + 0x1d0) + 0x11c))(this,1,0,&local_18,0,0);
        }
        if (nodeId_ != local_18) goto LAB_00647610;
      }
      if ((changeMask_ == 1) || ((changeMask_ & 2) != 0)) {
        if (((*(byte *)((int)this + 0x1c8) & 0x80) == 0) && (-1 < (int)uVar4)) {
          FUN_0063afd7(nodeId_,uVar4,&local_8,0);
        }
        local_10 = local_8 + 1;
        local_c = uVar4;
      }
      if ((changeMask_ != 1) && ((changeMask_ & 4) != 0)) {
        if ((-1 < (int)uVar4) &&
           ((uVar5 = FUN_0060d0a3(), uVar5 <= uVar4 ||
            (iVar6 = FUN_0060d0b9(uVar4), -1 < *(int *)(iVar6 + 4))))) {
          nodeId_ = (**(code **)(*(int *)this + 0x27c))(arg7,arg8,arg9,5,uVar4,1,notify_);
LAB_00647610:
          return nodeId_ & 0xffffff00;
        }
        changeMask_ = FUN_00665bbe(uVar4,3);
        uVar4 = FUN_0060c047(uVar4 + 1,0,firstChild_,1);
        FUN_006254aa();
        iVar6 = 0;
        uVar5 = uVar4;
        if (0 < childCount_) {
          do {
            local_20 = iVar6 + 1;
            local_18 = FUN_0060c047(uVar5,iVar6,local_20,1);
            iVar6 = FUN_0060d0b9(uVar5);
            piVar2 = (int *)FUN_0063bcec(iVar6 + 8);
            *piVar2 = (local_18 - uVar5) + -1;
            iVar6 = local_20;
            uVar5 = local_18;
          } while (local_20 < childCount_);
        }
        if (local_c == 0xffffffff) {
          local_c = uVar4;
        }
        local_18 = 0;
        if (0 < insertedCount_) {
          childCount_ = firstChild_;
          do {
            uVar5 = FUN_0060d0a3();
            if (uVar4 < uVar5) {
              iVar6 = FUN_0060d0b9(uVar4);
              iVar6 = *(int *)(iVar6 + 8);
            }
            else {
              iVar6 = 0;
            }
            (**(code **)(**(int **)((int)this + 0x1d0) + 0x11c))
                      (this,3,nodeId_,&local_10,childCount_,0);
            FUN_0062801b(&local_28,&local_10);
            if (iVar6 == local_10) {
              FUN_00618a07(local_50,local_54);
              cVar1 = FUN_0060d112(local_30);
              if (cVar1 != '\0') {
                nodeId_ = FUN_0062f0c4();
                goto LAB_00647610;
              }
              iVar6 = FUN_0060d6af();
              iVar7 = *(int *)(iVar6 + 4);
              FUN_0062dbbe(local_40,local_28,local_24);
            }
            else {
              iVar6 = 0;
              FUN_00618a07(local_50,local_54);
              cVar1 = FUN_0060d112(local_38);
              if (cVar1 == '\0') {
                iVar6 = FUN_006917e6(nodeId_,local_1c,uVar4,childCount_,1,changeMask_,&local_14);
                iVar6 = -iVar6;
                FUN_0062dbbe(local_48,local_28,local_24);
                changeMask_ = changeMask_ - 1;
              }
              iVar7 = FUN_00690f19(nodeId_,local_1c,uVar4,childCount_,1,changeMask_,&local_14);
              changeMask_ = changeMask_ + 1;
              local_8 = local_8 + iVar6 + iVar7;
            }
            local_20 = 0;
            FUN_0063afd7(local_10,uVar4,&local_20,0);
            if (local_20 != 0) {
              iVar7 = iVar7 + local_20;
              local_8 = local_8 + local_20;
            }
            local_18 = local_18 + 1;
            childCount_ = childCount_ + 1;
            uVar4 = uVar4 + 1 + iVar7;
          } while ((int)local_18 < insertedCount_);
        }
        iVar6 = uVar4 - local_c;
        local_10 = iVar6;
        if (local_4c != 0) {
          local_10 = FUN_006917e6(nodeId_,local_1c,uVar4,local_18 + firstChild_,local_4c,changeMask_
                                  ,&local_14);
          local_8 = local_8 - local_10;
          local_10 = iVar6 + local_10;
        }
        FUN_0062f0c4();
      }
      if (local_8 == 0) goto LAB_006478db;
      uVar4 = local_8;
      if (0 < (int)local_8) {
        uVar4 = -local_8;
      }
      iVar6 = local_10 + uVar4;
      cVar1 = ((int)local_8 < 1) * '\x02' + '\x02';
      if (0 < local_14) {
        local_c = local_c - local_14;
        iVar6 = iVar6 + local_14;
      }
      if (iVar6 == 0) {
        uVar4 = (**(code **)(*(int *)this + 0x27c))(arg7,arg8,arg9,cVar1,local_c,local_10,notify_);
        return uVar4;
      }
      (**(code **)(*(int *)this + 0x27c))
                (arg7,arg8,arg9,cVar1,local_c + iVar6,
                 (local_8 ^ (int)local_8 >> 0x1f) - ((int)local_8 >> 0x1f),notify_);
      uVar3 = (**(code **)(*(int *)this + 0x27c))(arg7,arg8,arg9,5,local_c,iVar6,notify_);
    }
    uVar4 = CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  return uVar4;
}

