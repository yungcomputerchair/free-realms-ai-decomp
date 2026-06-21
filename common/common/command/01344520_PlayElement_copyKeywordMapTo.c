// addr: 0x01344520
// name: PlayElement_copyKeywordMapTo
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: void PlayElement_copyKeywordMapTo(void * this, void * target) */

void __thiscall PlayElement_copyKeywordMapTo(void *this,void *target)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_18 [4];
  int *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copies keyword/effect-map entries from one PlayElement to another by
                       iterating a temporary PlayElementKeywordMap copy and applying each key to the
                       target. Used during detach/destructor cleanup and unowned-card discard
                       handling. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167cb40;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  PlayElementKeywordMap_copyCtor(local_18,(void *)((int)this + 0xc));
  piVar2 = local_14;
  local_4 = 1;
  piVar1 = (int *)*local_14;
  while( true ) {
    if (&stack0x00000000 == &DAT_00000018) {
      FUN_00d83c2d(uVar3);
    }
    if (piVar1 == piVar2) break;
    if (&stack0x00000000 == &DAT_00000018) {
      FUN_00d83c2d(uVar3);
    }
    if (piVar1 == local_14) {
      FUN_00d83c2d(uVar3);
    }
    FUN_01342eb0(target,piVar1[3]);
    FUN_01340aa0();
  }
  local_4 = 0xffffffff;
  FUN_013439e0();
  ExceptionList = local_c;
  return;
}

