FROM python:3

COPY requirements.txt ./
RUN python -m pip install -r requirements.txt

WORKDIR /app
COPY ./main.py /app/

CMD [ "python", "./main.py" ]
