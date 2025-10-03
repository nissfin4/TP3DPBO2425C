class RekamMedis:
    def __init__(self, id: int = 0, diagnosis: str = ""):
        self.id = id
        self.diagnosis = diagnosis

    def get_id(self) -> int:
        return self.id

    def get_diagnosis(self) -> str:
        return self.diagnosis

    def set_id(self, id: int):
        self.id = id

    def set_diagnosis(self, diagnosis: str):
        self.diagnosis = diagnosis
