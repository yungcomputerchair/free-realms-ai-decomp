// addr: 0x0095d0f0
// name: FUN_0095d0f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_0095d0f0(void * packet, int * outSequence) */

void * __thiscall FUN_0095d0f0(void *this,void *packet,int *outSequence)

{
  int iVar1;
  int iVar2;
  char cVar3;
  void *pvVar4;
  int *piVar5;
  int *piVar6;
  void *unaff_EBP;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Handles a BasePlayerUpdatePacket sub-dispatch: advances a sequence counter,
                       allocates/constructs an event, chooses a target handler based on event state,
                       and dispatches it virtually. Class/method name is not explicit. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0159576b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar1 = *(int *)((int)this + 0x808);
  (**(code **)(*(int *)this + 0x24))();
  FUN_0078a740();
  iVar2 = *(int *)(iVar1 + 4);
  piVar5 = (int *)(iVar2 + 0x9c);
  *piVar5 = *piVar5 + 1;
  *(undefined4 *)packet = *(undefined4 *)(iVar2 + 0x9c);
  pvVar4 = Mem_Alloc(0x60);
  uStack_4 = 0;
  if (pvVar4 == (void *)0x0) {
    piVar5 = (int *)0x0;
  }
  else {
    (**(code **)(*(int *)((int)this + 0x54) + 0x10))();
    piVar5 = (int *)FUN_00959bf0();
  }
  uStack_4 = 0xffffffff;
  if (piVar5 == (int *)0x0) {
    piVar6 = *(int **)(iVar1 + 4);
  }
  else {
    piVar6 = (int *)piVar5[10];
    if (piVar6 == (int *)0x0) {
      cVar3 = (**(code **)(*piVar5 + 0x18))();
      if (cVar3 == '\0') {
        piVar6 = *(int **)(iVar1 + 8);
      }
      else {
        piVar6 = *(int **)(iVar1 + 4);
      }
    }
  }
  (**(code **)(*piVar6 + 8))();
  ExceptionList = unaff_EBP;
  return local_c;
}

