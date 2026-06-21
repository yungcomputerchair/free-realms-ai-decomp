// addr: 0x0086cd80
// name: EffectVariableBindings_writeXml
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool EffectVariableBindings_writeXml(void * parent, void * valueBlock, void *
   variableTable) */

bool __cdecl EffectVariableBindings_writeXml(void *parent,void *valueBlock,void *variableTable)

{
  undefined2 *puVar1;
  uint *puVar2;
  void **ppvVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  int *piVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes matching effect variable bindings as Variable child elements with
                       Binary, Integer, Value, or Vector attributes depending on the variable type.
                       Evidence: strings 'Variable', 'Binary', 'Integer', 'Value', and 'Vector', and
                       caller ActorMeshEmitterDefinition_writeXml emits optional variable data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01574a3b;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  puVar1 = *(undefined2 **)(*(int *)((int)valueBlock + 0x40) + 0x10);
  ppvVar3 = &local_c;
  local_c = ExceptionList;
  do {
    ExceptionList = ppvVar3;
    if (puVar1 == (undefined2 *)0x0) {
      ExceptionList = local_c;
      return true;
    }
    for (puVar2 = *(uint **)((int)variableTable + (*(uint *)(puVar1 + 6) & 3) * 4 + 0xc);
        puVar2 != (uint *)0x0; puVar2 = (uint *)puVar2[5]) {
      if (*puVar2 == *(uint *)(puVar1 + 6)) {
        if (puVar2 != (uint *)0xfffffffc) {
          pvVar5 = Mem_Alloc(0x50);
          local_4 = 0;
          if (pvVar5 == (void *)0x0) {
            uVar6 = 0;
          }
          else {
            uVar6 = FUN_00d52e70("Variable");
          }
          local_4 = 0xffffffff;
          piVar7 = (int *)TiXmlNode_LinkEndChild(uVar6);
          pvVar5 = (void *)(**(code **)(*piVar7 + 0x14))(uVar4);
          TiXmlElement_SetAttribute(pvVar5,"Name",(char *)puVar2[2]);
          switch(*puVar1) {
          case 0:
            TiXmlElement_SetBoolAttribute
                      (pvVar5,"Binary",
                       *(bool *)((int)(short)puVar1[1] + *(int *)((int)valueBlock + 4)));
            break;
          case 1:
            FUN_0087d580(pvVar5,"Integer",
                         *(undefined4 *)(*(int *)((int)valueBlock + 0x14) + (short)puVar1[1] * 4));
            break;
          case 2:
            FUN_0087d560(pvVar5,"Value",
                         *(undefined4 *)(*(int *)((int)valueBlock + 0x24) + (short)puVar1[1] * 4));
            break;
          case 3:
            FUN_0086cb80(pvVar5,"Vector",(short)puVar1[1] * 0x10 + *(int *)((int)valueBlock + 0x34))
            ;
          }
        }
        break;
      }
    }
    puVar1 = *(undefined2 **)(puVar1 + 2);
    ppvVar3 = ExceptionList;
  } while( true );
}

