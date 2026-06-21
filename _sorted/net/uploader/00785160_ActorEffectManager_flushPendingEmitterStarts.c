// addr: 0x00785160
// name: ActorEffectManager_flushPendingEmitterStarts
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ActorEffectManager_flushPendingEmitterStarts(void * manager) */

void __fastcall ActorEffectManager_flushPendingEmitterStarts(void *manager)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  undefined4 unaff_EDI;
  
                    /* Walks three pending emitter lists, starts valid descriptors, and unlinks
                       processed list nodes. */
  if (*(int *)((int)manager + 0x5d8) != 0) {
    piVar1 = *(int **)((int)manager + 0x5d0);
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[0xe];
      piVar4 = (int *)(**(code **)(*piVar2 + 0x28))();
      if ((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 0xc))(), cVar3 != '\0')) {
        ActorSoundEmitter_createOrUpdateForActor(piVar4,*(undefined4 *)((int)manager + 0x570),1);
        FUN_0077ec30(piVar2);
      }
    }
  }
  if (*(int *)((int)manager + 0x5e8) != 0) {
    piVar1 = *(int **)((int)manager + 0x5e0);
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[0xf];
      piVar4 = (int *)(**(code **)(*piVar2 + 0x28))();
      if ((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 0xc))(), cVar3 != '\0')) {
        ActorParticleEmitter_createFromDefinition(piVar4,*(undefined4 *)((int)manager + 0x570),1);
        FUN_0077ecc0(piVar2);
      }
    }
  }
  if (*(int *)((int)manager + 0x5f8) != 0) {
    piVar1 = *(int **)((int)manager + 0x5f0);
    while (piVar2 = piVar1, piVar2 != (int *)0x0) {
      piVar1 = (int *)piVar2[0xe];
      piVar4 = (int *)(**(code **)(*piVar2 + 0x28))();
      if ((piVar4 != (int *)0x0) && (cVar3 = (**(code **)(*piVar4 + 0xc))(), cVar3 != '\0')) {
        ActorEffectManager_createOrAttachCompositeEffectEmitter
                  (manager,piVar4,*(void **)((int)manager + 0x570),1,SUB41(unaff_EDI,0));
        FUN_0077ed50(piVar2);
      }
    }
  }
  return;
}

