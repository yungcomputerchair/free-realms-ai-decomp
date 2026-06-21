// addr: 0x013922d0
// name: Card_removeAction
// subsystem: common/common/game
// source (binary assert): common/common/game/Card.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Card_removeAction(void * this, void * action) */

void __thiscall Card_removeAction(void *this,void *action)

{
  int *piVar1;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  rsize_t _DstSize;
  int *_Dst;
  int iVar5;
  int *extraout_EAX;
  int *unaff_EDI;
  undefined1 auStack_8 [4];
  int *piStack_4;
  
                    /* Removes an action id from the card action vector/map if present. It asserts
                       the action argument and erases the matching action id from internal
                       containers. */
  if (action == (void *)0x0) {
    FUN_012f5a60("action","..\\common\\common\\game\\Card.cpp",0xcfa);
  }
  iVar5 = FUN_01321f20();
  piVar1 = *(int **)((int)this + 0xa8);
  if (piVar1 < *(int **)((int)this + 0xa4)) {
    FUN_00d83c2d();
  }
  piVar2 = *(int **)((int)this + 0xa4);
  _Dst = piVar2;
  if (*(int **)((int)this + 0xa8) < piVar2) {
    FUN_00d83c2d();
  }
  for (; (_Dst != piVar1 && (*_Dst != iVar5)); _Dst = _Dst + 1) {
  }
  piVar1 = *(int **)((int)this + 0xa8);
  piStack_4 = piVar2;
  if (piVar1 < *(int **)((int)this + 0xa4)) {
    FUN_00d83c2d();
  }
  if (this == (void *)0xffffff60) {
    FUN_00d83c2d();
  }
  if (_Dst != piVar1) {
    iVar5 = *(int *)((int)this + 0xa8) - (int)(_Dst + 1) >> 2;
    if (0 < iVar5) {
      _DstSize = iVar5 * 4;
      _memmove_s(_Dst,_DstSize,_Dst + 1,_DstSize);
    }
    *(int *)((int)this + 0xa8) = *(int *)((int)this + 0xa8) + -4;
  }
  action = (void *)FUN_01321f20();
  StdRbTreeInt_find((void *)((int)this + 0x6c),auStack_8,&action,unaff_EDI);
  pvVar3 = (void *)*extraout_EAX;
  iVar5 = extraout_EAX[1];
  iVar4 = *(int *)((int)this + 0x70);
  if ((pvVar3 == (void *)0x0) || (pvVar3 != (void *)((int)this + 0x6c))) {
    FUN_00d83c2d();
  }
  if (iVar5 != iVar4) {
    FUN_0050c2c9(auStack_8,pvVar3,iVar5);
  }
  return;
}

