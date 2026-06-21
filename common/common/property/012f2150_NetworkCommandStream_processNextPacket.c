// addr: 0x012f2150
// name: NetworkCommandStream_processNextPacket
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int NetworkCommandStream_processNextPacket(void * stream) */

int __fastcall NetworkCommandStream_processNextPacket(void *stream)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint *outValue;
  void *pvVar4;
  undefined4 *extraout_EAX;
  int *piVar5;
  void *this;
  int iVar6;
  undefined1 *new_size;
  undefined4 uStack_44;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [4];
  undefined1 uStack_2c;
  uint uStack_1c;
  undefined4 uStack_18;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Attempts to parse one length-prefixed command from the stream buffer,
                       instantiates it by class id, deserializes/handles it, logs oversized text,
                       and removes consumed bytes. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016740a0;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&uStack_44;
  outValue = (uint *)(DAT_01b839d8 ^ (uint)&stack0xffffffac);
  ExceptionList = &local_c;
  if (4 < *(int *)((int)stream + 0x54)) {
    pvVar4 = (void *)Ordinal_14(**(undefined4 **)((int)stream + 0x50));
    iVar1 = (int)pvVar4 + 4;
    if (iVar1 <= *(int *)((int)stream + 0x54)) {
      PacketBuffer_init(auStack_40);
      uStack_4 = 0;
      RawBuffer_assign(auStack_40,(void *)(*(int *)((int)stream + 0x50) + 4),pvVar4,(uint)outValue);
      bVar2 = PacketBuffer_readPackedUInt(auStack_40,&uStack_44,outValue);
      if (bVar2) {
        ComponentFactory_initSingleton();
        piVar5 = (int *)(**(code **)*extraout_EAX)(uStack_44);
        if (piVar5 != (int *)0x0) {
          new_size = auStack_40;
          cVar3 = (**(code **)(*piVar5 + 0x24))();
          if (cVar3 != '\0') {
            DisplayActionManager_ensureSingleton();
            iVar6 = ObjectWithField1c_hasValue(this);
            if ((char)iVar6 != '\0') {
              uStack_18 = 0xf;
              uStack_1c = 0;
              uStack_2c = 0;
              puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,1);
              (**(code **)(*piVar5 + 0x4c))(auStack_30);
              if (4000 < uStack_1c) {
                StdString_resizeWithNulFill(auStack_30,(void *)0xfa0,(int)new_size);
              }
              puStack_8 = (undefined1 *)((uint)puStack_8 & 0xffffff00);
              FUN_0041f1d7();
            }
            iVar6 = FUN_00d8d382(piVar5,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &GameCommand::RTTI_Type_Descriptor,0);
            if ((iVar6 == 0) || (pvVar4 = Game_findByID(1), pvVar4 != (void *)0x0)) {
              (**(code **)(*piVar5 + 0x38))();
            }
            (**(code **)*piVar5)(1);
            pvVar4 = *(void **)((int)stream + 0x50);
            if (pvVar4 != (void *)0x0) {
              _memmove(pvVar4,(void *)((int)pvVar4 + iVar1),*(int *)((int)stream + 0x54) - iVar1);
              *(int *)((int)stream + 0x54) = *(int *)((int)stream + 0x54) - iVar1;
            }
            uStack_4 = 0xffffffff;
            RawBuffer_free(auStack_40);
            ExceptionList = local_c;
            return 0;
          }
          (**(code **)*piVar5)(1);
        }
      }
      uStack_4 = 0xffffffff;
      RawBuffer_free(auStack_40);
    }
  }
  ExceptionList = local_c;
  return -1;
}

