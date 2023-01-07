
const _scene = new Entity('_scene')
engine.addEntity(_scene)
const transform = new Transform({
  position: new Vector3(0, 0, 0),
  rotation: new Quaternion(0, 0, 0, 1),
  scale: new Vector3(1, 1, 1)
})
_scene.addComponentOrReplace(transform)

const entity = new Entity('entity')
engine.addEntity(entity)
entity.setParent(_scene)
const gltfShape = new GLTFShape("c9b17021-765c-4d9a-9966-ce93a9c323d1/FloorBaseGrass_01/FloorBaseGrass_01.glb")
gltfShape.withCollisions = true
gltfShape.isPointerBlocker = true
gltfShape.visible = true
entity.addComponentOrReplace(gltfShape)
const transform2 = new Transform({
  position: new Vector3(8, 0, 8),
  rotation: new Quaternion(0, 0, 0, 1),
  scale: new Vector3(1, 1, 1)
})
entity.addComponentOrReplace(transform2)

const modelForDCLDoorsIncluded = new Entity('modelForDCLDoorsIncluded')
engine.addEntity(modelForDCLDoorsIncluded)
modelForDCLDoorsIncluded.setParent(_scene)
const transform3 = new Transform({
  position: new Vector3(10.5, 0, 9),
  rotation: new Quaternion(0, 0, 0, 1),
  scale: new Vector3(1.4560394287109375, 1.4560394287109375, 1.4560394287109375)
})
modelForDCLDoorsIncluded.addComponentOrReplace(transform3)
const gltfShape2 = new GLTFShape("158399a3-0103-47b9-9318-5693c24883c8/model for DCL_doors included.glb")
gltfShape2.withCollisions = true
gltfShape2.isPointerBlocker = true
gltfShape2.visible = true
modelForDCLDoorsIncluded.addComponentOrReplace(gltfShape2)

const apple = new Entity('apple')
engine.addEntity(apple)
apple.setParent(_scene)
const transform4 = new Transform({
  position: new Vector3(9.5, 0, 12),
  rotation: new Quaternion(0, 0, 0, 1),
  scale: new Vector3(1, 1, 1)
})
apple.addComponentOrReplace(transform4)
const gltfShape3 = new GLTFShape("efe88bc5-618c-4294-a5b5-4c64e95fafa3/FoodApple_01/FoodApple_01.glb")
gltfShape3.withCollisions = true
gltfShape3.isPointerBlocker = true
gltfShape3.visible = true
apple.addComponentOrReplace(gltfShape3)

const electricBluePalm = new Entity('electricBluePalm')
engine.addEntity(electricBluePalm)
electricBluePalm.setParent(_scene)
const transform5 = new Transform({
  position: new Vector3(12.5, 0, 6.5),
  rotation: new Quaternion(1.7593112542488233e-15, -1, 1.1920926823449918e-7, 0),
  scale: new Vector3(1, 1, 1)
})
electricBluePalm.addComponentOrReplace(transform5)
const gltfShape4 = new GLTFShape("9e3ce4b4-837b-46b7-a8cb-ddd2641d06bb/PlantSF_08/PlantSF_08.glb")
gltfShape4.withCollisions = true
gltfShape4.isPointerBlocker = true
gltfShape4.visible = true
electricBluePalm.addComponentOrReplace(gltfShape4)

const largeComet = new Entity('largeComet')
engine.addEntity(largeComet)
largeComet.setParent(_scene)
const transform6 = new Transform({
  position: new Vector3(4.5, 0, 11.5),
  rotation: new Quaternion(0, 0, 0, 1),
  scale: new Vector3(1, 1, 1)
})
largeComet.addComponentOrReplace(transform6)
const gltfShape5 = new GLTFShape("575e09a1-56e7-4c52-baaf-ce45b1cf5944/Comet_04/Comet_04.glb")
gltfShape5.withCollisions = true
gltfShape5.isPointerBlocker = true
gltfShape5.visible = true
largeComet.addComponentOrReplace(gltfShape5)

const pinkHyacinth = new Entity('pinkHyacinth')
engine.addEntity(pinkHyacinth)
pinkHyacinth.setParent(_scene)
const transform7 = new Transform({
  position: new Vector3(14, 0, 10.5),
  rotation: new Quaternion(0, 0, 0, 1),
  scale: new Vector3(1, 1, 1)
})
pinkHyacinth.addComponentOrReplace(transform7)
const gltfShape6 = new GLTFShape("b8d23163-9185-4acc-a2a3-44ee968a1f87/PlantSF_11/PlantSF_11.glb")
gltfShape6.withCollisions = true
gltfShape6.isPointerBlocker = true
gltfShape6.visible = true
pinkHyacinth.addComponentOrReplace(gltfShape6)

const smoothCactus = new Entity('smoothCactus')
engine.addEntity(smoothCactus)
smoothCactus.setParent(_scene)
const transform8 = new Transform({
  position: new Vector3(11, 0, 6.5),
  rotation: new Quaternion(0, 0, 0, 1),
  scale: new Vector3(1, 1, 1)
})
smoothCactus.addComponentOrReplace(transform8)
const gltfShape7 = new GLTFShape("c94a39e6-cd04-49c0-8687-a547f4d673ba/PlantSF_03/PlantSF_03.glb")
gltfShape7.withCollisions = true
gltfShape7.isPointerBlocker = true
gltfShape7.visible = true
smoothCactus.addComponentOrReplace(gltfShape7)

const tealTreeBulb = new Entity('tealTreeBulb')
engine.addEntity(tealTreeBulb)
tealTreeBulb.setParent(_scene)
const transform9 = new Transform({
  position: new Vector3(5.5, 0, 8),
  rotation: new Quaternion(0, 0, 0, 1),
  scale: new Vector3(1, 1, 1)
})
tealTreeBulb.addComponentOrReplace(transform9)
const gltfShape8 = new GLTFShape("a0338fcf-e109-45f1-8cfd-cea058c07c94/PlantSF_13/PlantSF_13.glb")
gltfShape8.withCollisions = true
gltfShape8.isPointerBlocker = true
gltfShape8.visible = true
tealTreeBulb.addComponentOrReplace(gltfShape8)


//const fox = new Entity('fox')
//engine.addEntity(fox)
//fox.setParent(_scene)
//const transform10 = new Transform({
//    position: new Vector3(6.5, 0, 8),
//    rotation: new Quaternion(0, 0, 0, 1),
//    scale: new Vector3(1, 1, 1)
//})
//fox.addComponentOrReplace(transform10)
//const gltfShape9 = new GLTFShape("fox/fox_non_-_commercial.glb")
//gltfShape9.withCollisions = true
//gltfShape9.isPointerBlocker = true
//gltfShape9.visible = true
//fox.addComponentOrReplace(gltfShape9)

const guitar = new Entity('guitar')
engine.addEntity(guitar)
guitar.setParent(_scene)
const transform11 = new Transform({
    position: new Vector3(1.5, 1, 10),
    rotation: new Quaternion(0, 0, 0, 1),
    scale: new Vector3(0.025, 0.025, 0.025)
})
guitar.addComponentOrReplace(transform11)
const gltfShape10 = new GLTFShape("guitar/low_poly_guitar.glb")
gltfShape10.withCollisions = true
gltfShape10.isPointerBlocker = true
gltfShape10.visible = true
guitar.addComponentOrReplace(gltfShape10)