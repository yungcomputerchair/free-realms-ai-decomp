// addr: 0x0077b710
// name: FUN_0077b710
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void setActorCustomizationSlot(void * actor, int slot_, char * value) */

void __thiscall setActorCustomizationSlot(void *this,void *actor,int slot_,char *value)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
                    /* Sets or clears an actor customization slot. With a nonempty value it forwards
                       to a customization interface; otherwise it logs/updates state, releases the
                       old refcounted slot object, and clears the slot. */
  if ((slot_ != 0) && (*(char *)slot_ != '\0')) {
    switch(actor) {
    case (void *)0x0:
      uVar3 = 0;
      break;
    case (void *)0x1:
      uVar3 = 1;
      break;
    case (void *)0x2:
      uVar3 = 2;
      break;
    case (void *)0x3:
      uVar3 = 3;
      break;
    case (void *)0x4:
      uVar3 = 4;
      break;
    default:
      goto switchD_0077b72e_default;
    }
    if (this == (void *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)this + 0x1c0;
    }
    (**(code **)(**(int **)((int)this + 0x1c4) + 0xc))(slot_,uVar3,iVar4);
    return;
  }
  Deep_ModelEntity_setModelDefinition(0,actor,0);
  iVar4 = *(int *)((int)this + 0x1e0);
  if ((iVar4 <= (int)actor) && ((iVar1 = (int)actor + 1, iVar4 < iVar1 && (iVar4 <= (int)actor)))) {
    if (*(int *)((int)this + 0x1e4) < iVar1) {
      FUN_0076e730(iVar1,0);
    }
    *(int *)((int)this + 0x1e0) = iVar1;
  }
  piVar2 = *(int **)(*(int *)((int)this + 0x1dc) + (int)actor * 4);
  if (piVar2 != (int *)0x0) {
    if (piVar2[1] == 1) {
      (**(code **)(**(int **)((int)this + 0x1c4) + 0x3c))(piVar2);
    }
    LOCK();
    iVar4 = piVar2[1] + -1;
    piVar2[1] = iVar4;
    UNLOCK();
    if (iVar4 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
  }
  iVar4 = *(int *)((int)this + 0x1e0);
  if (((iVar4 <= (int)actor) && (iVar4 < (int)actor + 1)) && (iVar4 <= (int)actor)) {
    iVar4 = (int)actor + 1;
    if (*(int *)((int)this + 0x1e4) < iVar4) {
      FUN_0076e730(iVar4,0);
    }
    *(int *)((int)this + 0x1e0) = iVar4;
  }
  *(undefined4 *)(*(int *)((int)this + 0x1dc) + (int)actor * 4) = 0;
switchD_0077b72e_default:
  return;
}

