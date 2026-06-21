// addr: 0x007827a0
// name: FUN_007827a0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool applyActorCustomizationDetails(void * actor, void * details, bool
   refreshExisting_) */

bool __thiscall
applyActorCustomizationDetails(void *this,void *actor,void *details,bool refreshExisting_)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  bool bVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Applies actor customization details by type, lazily creating a customization
                       helper, refreshing parts/materials, and logging bad detail types to
                       CustomizationErrors.log. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015595cb;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  bVar5 = true;
  if ((((*(int *)((int)this + 0x4b8) == 0) && (*(int *)actor != 0)) &&
      (**(int **)((int)this + 0x130) != 0)) &&
     (iVar1 = *(int *)(**(int **)((int)this + 0x130) + 0x84), iVar1 != 0)) {
    pvVar3 = Mem_Alloc(0x88);
    local_4 = 0;
    if (pvVar3 == (void *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_010a5220(iVar1);
    }
    *(undefined4 *)((int)this + 0x4b8) = uVar4;
  }
  local_4 = 0xffffffff;
  switch(*(undefined4 *)actor) {
  case 0:
    break;
  case 1:
    if ((char)details != '\0') {
      FUN_0077bfd0(*(undefined4 *)((int)actor + 8),*(undefined4 *)((int)actor + 0x18));
    }
    if (0 < *(int *)((int)actor + 0xc)) {
      FUN_007b8ec0(*(undefined4 *)((int)actor + 8),0,this);
    }
    if (0 < *(int *)((int)actor + 0x1c)) {
      FUN_00782690((int)actor + 0x14,1,*(undefined4 *)((int)actor + 0x24));
    }
    break;
  case 2:
    if ((char)details != '\0') {
      FUN_0077bfd0(*(undefined4 *)((int)actor + 8),*(undefined4 *)((int)actor + 0x18));
    }
    if ((0 < *(int *)((int)actor + 0xc)) && (0 < *(int *)((int)actor + 0x30))) {
      FUN_007b8ec0(*(undefined4 *)((int)actor + 8),*(undefined4 *)((int)actor + 0x2c),this);
    }
    if (0 < *(int *)((int)actor + 0x1c)) {
      FUN_00782690((int)actor + 0x14,1,*(undefined4 *)((int)actor + 0x24));
    }
    break;
  case 3:
    (**(code **)(**(int **)((int)this + 0x1c4) + 0xc))
              (*(undefined4 *)((int)actor + 0x2c),0xd,(int)this + 0x1c0);
    bVar5 = false;
    break;
  default:
    if (*(int *)((int)this + 0x2b0) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(undefined4 *)((int)this + 0x280);
    }
    FUN_00704db0("CustomizationErrors.log","Actor %s got bad customization details with type %d",
                 uVar4,*(undefined4 *)actor,uVar2);
  }
  ExceptionList = local_c;
  return bVar5;
}

