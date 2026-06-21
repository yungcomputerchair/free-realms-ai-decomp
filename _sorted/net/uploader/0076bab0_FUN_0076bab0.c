// addr: 0x0076bab0
// name: FUN_0076bab0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void copyActorAttachmentState_220(void * source, void * actor) */

void __thiscall copyActorAttachmentState_220(void *this,void *source,void *actor)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures an auxiliary state block exists at actor+0x220 and copies selected
                       fields from source into it. Class and exact state meaning are unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0155725b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)source + 0x220) == 0) {
    puVar1 = Mem_Alloc(0x30);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = source;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0;
    }
    *(undefined4 **)((int)source + 0x220) = puVar1;
  }
  *(undefined4 *)(*(int *)((int)source + 0x220) + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(*(int *)((int)source + 0x220) + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(*(int *)((int)source + 0x220) + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(*(int *)((int)source + 0x220) + 0x10) = *(undefined4 *)((int)this + 0x10);
  *(undefined4 *)(*(int *)((int)source + 0x220) + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)(*(int *)((int)source + 0x220) + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  *(undefined4 *)(*(int *)((int)source + 0x220) + 0x20) = *(undefined4 *)((int)this + 0x20);
  *(undefined4 *)(*(int *)((int)source + 0x220) + 0x24) = *(undefined4 *)((int)this + 0x24);
  *(undefined4 *)(*(int *)((int)source + 0x220) + 0x2c) = *(undefined4 *)((int)this + 0x2c);
  ExceptionList = local_c;
  return;
}

