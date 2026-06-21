// addr: 0x012ca880
// name: PollControl_clearControlsAndRequestAdd
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollControl_clearControlsAndRequestAdd(void * controls) */

void __fastcall PollControl_clearControlsAndRequestAdd(void *controls)

{
  rsize_t _DstSize;
  int *piVar1;
  void *_Src;
  void *_Dst;
  uint uVar2;
  int iVar3;
  void *handle;
  int *piVar4;
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Destroys and compacts a vector of poll-control pointers, then constructs and
                       dispatches PollCommand_AddPollControl with argument 1 through
                       DisplayActionManager. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166f368;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  piVar1 = *(int **)((int)controls + 8);
  if (piVar1 < *(int **)((int)controls + 4)) {
    FUN_00d83c2d(uVar2);
  }
  piVar4 = *(int **)((int)controls + 4);
  if (*(int **)((int)controls + 8) < piVar4) {
    FUN_00d83c2d(uVar2);
  }
  while( true ) {
    if (controls == (void *)0x0) {
      FUN_00d83c2d(uVar2);
    }
    if (piVar4 == piVar1) break;
    if (controls == (void *)0x0) {
      FUN_00d83c2d(uVar2);
    }
    if (*(int **)((int)controls + 8) <= piVar4) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar4)(1);
    }
    if (*(int **)((int)controls + 8) <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  _Src = *(void **)((int)controls + 8);
  if (_Src < *(void **)((int)controls + 4)) {
    FUN_00d83c2d(uVar2);
  }
  _Dst = *(void **)((int)controls + 4);
  if (*(void **)((int)controls + 8) < _Dst) {
    FUN_00d83c2d();
  }
  if (_Dst != _Src) {
    iVar3 = *(int *)((int)controls + 8) - (int)_Src >> 2;
    _DstSize = iVar3 * 4;
    if (0 < iVar3) {
      _memmove_s(_Dst,_DstSize,_Src,_DstSize);
    }
    *(void **)((int)controls + 8) = (void *)(_DstSize + (int)_Dst);
  }
  PollCommand_AddPollControl_ctor(auStack_14);
  uStack_4 = 0;
  FUN_013d7c70(1);
  DisplayActionManager_ensureSingleton();
  CommandHandle_releaseIfPresent(handle);
  uStack_4 = 0xffffffff;
  PollCommand_AddPollControl_dtor(auStack_14);
  ExceptionList = local_c;
  return;
}

